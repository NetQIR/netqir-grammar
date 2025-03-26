%Qubit = type opaque
%Result = type opaque
%Comm = type opaque
%size_world = alloca i32

define void @main(i32 noundef %0, ptr noundef %1) #0 {
        entry:
                call void @__netqir__initialize();

                %q0 = alloca %Qubit;
                %q1 = alloca %Qubit;
                %r0 = alloca %Result;
                call i32 @__netqir__comm_rank(%Comm* @netqir_comm_world, ptr %rk0);
                call i32 @__netqir__comm_size(%Comm* @netqir_comm_world, ptr %size_world);
                call void @__quantum__qis__h__body(%Qubit* %q0);
                call void @__quantum__qis__cx__body(%Qubit* %q0, %Qubit* %q1);
                call void @__quantum__qis__barrier__body();
                call void @__quantum__qis__mz__body(%Qubit* %q0, %Result* %r0);
                %t0 = icmp eq i32 %q1, %r0;
                br i1 %t0, label %t1_true, label %t2_false;
        %t1_true:
                call void @__quantum__qis__x__body(%Qubit* %q1);
                br label %t3_continue;
        %t2_false:
                call void @__quantum__qis__i__body(%Qubit* %q1);
                br label %t3_continue;
        %t3_continue:
                %t4 = icmp ge i32 %rk0, 0;
                br i1 %t4, label %t5_true, label %t6_false;
        %t5_true:
                call i32 @__netqir__qsend_teledata(%Qubit* %q0, i32 1);
                br label %t7_continue;
        %t6_false:
                call i32 @__netqir__qrecv_teledata(%Qubit* %q0, i32 0);
                br label %t7_continue;
        %t7_continue:
                call void @__netqir__finalize();
}

declare i32 @__netqir__comm_rank(%Comm*, ptr);
declare i32 @__netqir__comm_size(%Comm*, ptr);
declare void @__netqir__finalize();
declare void @__netqir__initialize();
declare i32 @__netqir__qrecv_teledata(%Qubit*, i32);
declare i32 @__netqir__qsend_teledata(%Qubit*, i32);
declare void @__quantum__qis__barrier__body();
declare void @__quantum__qis__cx__body(%Qubit*, %Qubit*);
declare void @__quantum__qis__h__body(%Qubit*);
declare void @__quantum__qis__i__body(%Qubit*);
declare void @__quantum__qis__mz__body(%Qubit*, %Result*);
declare void @__quantum__qis__x__body(%Qubit*);