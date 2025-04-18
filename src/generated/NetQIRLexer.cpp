
// Generated from antlr/NetQIR.g4 by ANTLR 4.13.2


#include "generated/NetQIRLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct NetQIRLexerStaticData final {
  NetQIRLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  NetQIRLexerStaticData(const NetQIRLexerStaticData&) = delete;
  NetQIRLexerStaticData(NetQIRLexerStaticData&&) = delete;
  NetQIRLexerStaticData& operator=(const NetQIRLexerStaticData&) = delete;
  NetQIRLexerStaticData& operator=(NetQIRLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag netqirlexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<NetQIRLexerStaticData> netqirlexerLexerStaticData = nullptr;

void netqirlexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (netqirlexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(netqirlexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<NetQIRLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
      "T__9", "T__10", "T__11", "T__12", "T__13", "T__14", "T__15", "T__16", 
      "T__17", "T__18", "T__19", "T__20", "T__21", "T__22", "T__23", "T__24", 
      "T__25", "T__26", "T__27", "T__28", "T__29", "T__30", "T__31", "T__32", 
      "T__33", "T__34", "T__35", "T__36", "IDENTIFIER", "NETQIR", "QIR", 
      "REGISTER", "GLOBAL", "DIGIT", "INT", "COMMENT", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'('", "')'", "'define'", "'{'", "'}'", "'declare'", "';'", "':'", 
      "','", "'='", "'alloca'", "'align'", "'call'", "'load'", "'br'", "'label'", 
      "'icmp'", "'void'", "'i1'", "'i32'", "'ptr'", "'%Comm'", "'%Qubit'", 
      "'%Group'", "'*'", "'noundef'", "'eq'", "'ne'", "'ugt'", "'uge'", 
      "'ult'", "'ule'", "'sgt'", "'sge'", "'slt'", "'sle'", "'#'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "IDENTIFIER", "NETQIR", "QIR", "REGISTER", "GLOBAL", 
      "DIGIT", "INT", "COMMENT", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,46,315,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,
  	7,35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,
  	7,42,2,43,7,43,2,44,7,44,2,45,7,45,1,0,1,0,1,1,1,1,1,2,1,2,1,2,1,2,1,
  	2,1,2,1,2,1,3,1,3,1,4,1,4,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,6,1,6,1,7,
  	1,7,1,8,1,8,1,9,1,9,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,11,1,11,1,11,
  	1,11,1,11,1,11,1,12,1,12,1,12,1,12,1,12,1,13,1,13,1,13,1,13,1,13,1,14,
  	1,14,1,14,1,15,1,15,1,15,1,15,1,15,1,15,1,16,1,16,1,16,1,16,1,16,1,17,
  	1,17,1,17,1,17,1,17,1,18,1,18,1,18,1,19,1,19,1,19,1,19,1,20,1,20,1,20,
  	1,20,1,21,1,21,1,21,1,21,1,21,1,21,1,22,1,22,1,22,1,22,1,22,1,22,1,22,
  	1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,24,1,24,1,25,1,25,1,25,1,25,1,25,
  	1,25,1,25,1,25,1,26,1,26,1,26,1,27,1,27,1,27,1,28,1,28,1,28,1,28,1,29,
  	1,29,1,29,1,29,1,30,1,30,1,30,1,30,1,31,1,31,1,31,1,31,1,32,1,32,1,32,
  	1,32,1,33,1,33,1,33,1,33,1,34,1,34,1,34,1,34,1,35,1,35,1,35,1,35,1,36,
  	1,36,1,37,1,37,5,37,250,8,37,10,37,12,37,253,9,37,1,38,1,38,1,38,1,38,
  	1,38,1,38,1,38,1,38,1,38,1,38,1,38,1,38,1,38,1,38,1,39,1,39,1,39,1,39,
  	1,39,1,39,1,39,1,39,1,39,1,39,1,39,1,39,1,39,1,39,1,39,1,40,1,40,4,40,
  	286,8,40,11,40,12,40,287,1,41,1,41,1,41,1,42,1,42,1,43,4,43,296,8,43,
  	11,43,12,43,297,1,44,1,44,5,44,302,8,44,10,44,12,44,305,9,44,1,44,1,44,
  	1,45,4,45,310,8,45,11,45,12,45,311,1,45,1,45,0,0,46,1,1,3,2,5,3,7,4,9,
  	5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,29,15,31,16,33,17,
  	35,18,37,19,39,20,41,21,43,22,45,23,47,24,49,25,51,26,53,27,55,28,57,
  	29,59,30,61,31,63,32,65,33,67,34,69,35,71,36,73,37,75,38,77,39,79,40,
  	81,41,83,42,85,43,87,44,89,45,91,46,1,0,6,3,0,65,90,95,95,97,122,4,0,
  	48,57,65,90,95,95,97,122,3,0,48,57,65,90,97,122,1,0,48,57,2,0,10,10,13,
  	13,3,0,9,10,13,13,32,32,319,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,
  	0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,
  	0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,
  	1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,
  	0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,
  	0,51,1,0,0,0,0,53,1,0,0,0,0,55,1,0,0,0,0,57,1,0,0,0,0,59,1,0,0,0,0,61,
  	1,0,0,0,0,63,1,0,0,0,0,65,1,0,0,0,0,67,1,0,0,0,0,69,1,0,0,0,0,71,1,0,
  	0,0,0,73,1,0,0,0,0,75,1,0,0,0,0,77,1,0,0,0,0,79,1,0,0,0,0,81,1,0,0,0,
  	0,83,1,0,0,0,0,85,1,0,0,0,0,87,1,0,0,0,0,89,1,0,0,0,0,91,1,0,0,0,1,93,
  	1,0,0,0,3,95,1,0,0,0,5,97,1,0,0,0,7,104,1,0,0,0,9,106,1,0,0,0,11,108,
  	1,0,0,0,13,116,1,0,0,0,15,118,1,0,0,0,17,120,1,0,0,0,19,122,1,0,0,0,21,
  	124,1,0,0,0,23,131,1,0,0,0,25,137,1,0,0,0,27,142,1,0,0,0,29,147,1,0,0,
  	0,31,150,1,0,0,0,33,156,1,0,0,0,35,161,1,0,0,0,37,166,1,0,0,0,39,169,
  	1,0,0,0,41,173,1,0,0,0,43,177,1,0,0,0,45,183,1,0,0,0,47,190,1,0,0,0,49,
  	197,1,0,0,0,51,199,1,0,0,0,53,207,1,0,0,0,55,210,1,0,0,0,57,213,1,0,0,
  	0,59,217,1,0,0,0,61,221,1,0,0,0,63,225,1,0,0,0,65,229,1,0,0,0,67,233,
  	1,0,0,0,69,237,1,0,0,0,71,241,1,0,0,0,73,245,1,0,0,0,75,247,1,0,0,0,77,
  	254,1,0,0,0,79,268,1,0,0,0,81,283,1,0,0,0,83,289,1,0,0,0,85,292,1,0,0,
  	0,87,295,1,0,0,0,89,299,1,0,0,0,91,309,1,0,0,0,93,94,5,40,0,0,94,2,1,
  	0,0,0,95,96,5,41,0,0,96,4,1,0,0,0,97,98,5,100,0,0,98,99,5,101,0,0,99,
  	100,5,102,0,0,100,101,5,105,0,0,101,102,5,110,0,0,102,103,5,101,0,0,103,
  	6,1,0,0,0,104,105,5,123,0,0,105,8,1,0,0,0,106,107,5,125,0,0,107,10,1,
  	0,0,0,108,109,5,100,0,0,109,110,5,101,0,0,110,111,5,99,0,0,111,112,5,
  	108,0,0,112,113,5,97,0,0,113,114,5,114,0,0,114,115,5,101,0,0,115,12,1,
  	0,0,0,116,117,5,59,0,0,117,14,1,0,0,0,118,119,5,58,0,0,119,16,1,0,0,0,
  	120,121,5,44,0,0,121,18,1,0,0,0,122,123,5,61,0,0,123,20,1,0,0,0,124,125,
  	5,97,0,0,125,126,5,108,0,0,126,127,5,108,0,0,127,128,5,111,0,0,128,129,
  	5,99,0,0,129,130,5,97,0,0,130,22,1,0,0,0,131,132,5,97,0,0,132,133,5,108,
  	0,0,133,134,5,105,0,0,134,135,5,103,0,0,135,136,5,110,0,0,136,24,1,0,
  	0,0,137,138,5,99,0,0,138,139,5,97,0,0,139,140,5,108,0,0,140,141,5,108,
  	0,0,141,26,1,0,0,0,142,143,5,108,0,0,143,144,5,111,0,0,144,145,5,97,0,
  	0,145,146,5,100,0,0,146,28,1,0,0,0,147,148,5,98,0,0,148,149,5,114,0,0,
  	149,30,1,0,0,0,150,151,5,108,0,0,151,152,5,97,0,0,152,153,5,98,0,0,153,
  	154,5,101,0,0,154,155,5,108,0,0,155,32,1,0,0,0,156,157,5,105,0,0,157,
  	158,5,99,0,0,158,159,5,109,0,0,159,160,5,112,0,0,160,34,1,0,0,0,161,162,
  	5,118,0,0,162,163,5,111,0,0,163,164,5,105,0,0,164,165,5,100,0,0,165,36,
  	1,0,0,0,166,167,5,105,0,0,167,168,5,49,0,0,168,38,1,0,0,0,169,170,5,105,
  	0,0,170,171,5,51,0,0,171,172,5,50,0,0,172,40,1,0,0,0,173,174,5,112,0,
  	0,174,175,5,116,0,0,175,176,5,114,0,0,176,42,1,0,0,0,177,178,5,37,0,0,
  	178,179,5,67,0,0,179,180,5,111,0,0,180,181,5,109,0,0,181,182,5,109,0,
  	0,182,44,1,0,0,0,183,184,5,37,0,0,184,185,5,81,0,0,185,186,5,117,0,0,
  	186,187,5,98,0,0,187,188,5,105,0,0,188,189,5,116,0,0,189,46,1,0,0,0,190,
  	191,5,37,0,0,191,192,5,71,0,0,192,193,5,114,0,0,193,194,5,111,0,0,194,
  	195,5,117,0,0,195,196,5,112,0,0,196,48,1,0,0,0,197,198,5,42,0,0,198,50,
  	1,0,0,0,199,200,5,110,0,0,200,201,5,111,0,0,201,202,5,117,0,0,202,203,
  	5,110,0,0,203,204,5,100,0,0,204,205,5,101,0,0,205,206,5,102,0,0,206,52,
  	1,0,0,0,207,208,5,101,0,0,208,209,5,113,0,0,209,54,1,0,0,0,210,211,5,
  	110,0,0,211,212,5,101,0,0,212,56,1,0,0,0,213,214,5,117,0,0,214,215,5,
  	103,0,0,215,216,5,116,0,0,216,58,1,0,0,0,217,218,5,117,0,0,218,219,5,
  	103,0,0,219,220,5,101,0,0,220,60,1,0,0,0,221,222,5,117,0,0,222,223,5,
  	108,0,0,223,224,5,116,0,0,224,62,1,0,0,0,225,226,5,117,0,0,226,227,5,
  	108,0,0,227,228,5,101,0,0,228,64,1,0,0,0,229,230,5,115,0,0,230,231,5,
  	103,0,0,231,232,5,116,0,0,232,66,1,0,0,0,233,234,5,115,0,0,234,235,5,
  	103,0,0,235,236,5,101,0,0,236,68,1,0,0,0,237,238,5,115,0,0,238,239,5,
  	108,0,0,239,240,5,116,0,0,240,70,1,0,0,0,241,242,5,115,0,0,242,243,5,
  	108,0,0,243,244,5,101,0,0,244,72,1,0,0,0,245,246,5,35,0,0,246,74,1,0,
  	0,0,247,251,7,0,0,0,248,250,7,1,0,0,249,248,1,0,0,0,250,253,1,0,0,0,251,
  	249,1,0,0,0,251,252,1,0,0,0,252,76,1,0,0,0,253,251,1,0,0,0,254,255,5,
  	64,0,0,255,256,5,95,0,0,256,257,5,95,0,0,257,258,5,110,0,0,258,259,5,
  	101,0,0,259,260,5,116,0,0,260,261,5,113,0,0,261,262,5,105,0,0,262,263,
  	5,114,0,0,263,264,5,95,0,0,264,265,5,95,0,0,265,266,1,0,0,0,266,267,3,
  	75,37,0,267,78,1,0,0,0,268,269,5,64,0,0,269,270,5,95,0,0,270,271,5,95,
  	0,0,271,272,5,113,0,0,272,273,5,117,0,0,273,274,5,97,0,0,274,275,5,110,
  	0,0,275,276,5,116,0,0,276,277,5,117,0,0,277,278,5,109,0,0,278,279,5,95,
  	0,0,279,280,5,95,0,0,280,281,1,0,0,0,281,282,3,75,37,0,282,80,1,0,0,0,
  	283,285,5,37,0,0,284,286,7,2,0,0,285,284,1,0,0,0,286,287,1,0,0,0,287,
  	285,1,0,0,0,287,288,1,0,0,0,288,82,1,0,0,0,289,290,5,64,0,0,290,291,3,
  	75,37,0,291,84,1,0,0,0,292,293,7,3,0,0,293,86,1,0,0,0,294,296,3,85,42,
  	0,295,294,1,0,0,0,296,297,1,0,0,0,297,295,1,0,0,0,297,298,1,0,0,0,298,
  	88,1,0,0,0,299,303,5,59,0,0,300,302,8,4,0,0,301,300,1,0,0,0,302,305,1,
  	0,0,0,303,301,1,0,0,0,303,304,1,0,0,0,304,306,1,0,0,0,305,303,1,0,0,0,
  	306,307,6,44,0,0,307,90,1,0,0,0,308,310,7,5,0,0,309,308,1,0,0,0,310,311,
  	1,0,0,0,311,309,1,0,0,0,311,312,1,0,0,0,312,313,1,0,0,0,313,314,6,45,
  	0,0,314,92,1,0,0,0,6,0,251,287,297,303,311,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  netqirlexerLexerStaticData = std::move(staticData);
}

}

NetQIRLexer::NetQIRLexer(CharStream *input) : Lexer(input) {
  NetQIRLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *netqirlexerLexerStaticData->atn, netqirlexerLexerStaticData->decisionToDFA, netqirlexerLexerStaticData->sharedContextCache);
}

NetQIRLexer::~NetQIRLexer() {
  delete _interpreter;
}

std::string NetQIRLexer::getGrammarFileName() const {
  return "NetQIR.g4";
}

const std::vector<std::string>& NetQIRLexer::getRuleNames() const {
  return netqirlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& NetQIRLexer::getChannelNames() const {
  return netqirlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& NetQIRLexer::getModeNames() const {
  return netqirlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& NetQIRLexer::getVocabulary() const {
  return netqirlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView NetQIRLexer::getSerializedATN() const {
  return netqirlexerLexerStaticData->serializedATN;
}

const atn::ATN& NetQIRLexer::getATN() const {
  return *netqirlexerLexerStaticData->atn;
}




void NetQIRLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  netqirlexerLexerInitialize();
#else
  ::antlr4::internal::call_once(netqirlexerLexerOnceFlag, netqirlexerLexerInitialize);
#endif
}
