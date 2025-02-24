
// Generated from antlr/NetQIR.g4 by ANTLR 4.13.2


#include "generated/NetQIRListener.h"
#include "generated/NetQIRParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct NetQIRParserStaticData final {
  NetQIRParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  NetQIRParserStaticData(const NetQIRParserStaticData&) = delete;
  NetQIRParserStaticData(NetQIRParserStaticData&&) = delete;
  NetQIRParserStaticData& operator=(const NetQIRParserStaticData&) = delete;
  NetQIRParserStaticData& operator=(NetQIRParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag netqirParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<NetQIRParserStaticData> netqirParserStaticData = nullptr;

void netqirParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (netqirParserStaticData != nullptr) {
    return;
  }
#else
  assert(netqirParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<NetQIRParserStaticData>(
    std::vector<std::string>{
      "topLevel", "function", "functionDefinition", "declarationDefinition", 
      "block", "tag", "argList", "arg", "declParamList", "declParam", "statement", 
      "assignment", "assignmentInstruction", "noAssignmentInstruction", 
      "allocation", "functionCall", "loadInstruction", "branchCondInstruction", 
      "branchUncondInstruction", "comparisonInstruction", "constant", "returnType", 
      "type", "baseType", "pointer", "modifier", "comparisonOp", "attributeBlock"
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
  	4,1,46,258,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,1,0,1,
  	0,4,0,59,8,0,11,0,12,0,60,1,0,1,0,1,1,1,1,1,1,1,1,3,1,69,8,1,1,1,1,1,
  	1,2,1,2,1,2,3,2,76,8,2,1,2,1,2,5,2,80,8,2,10,2,12,2,83,9,2,1,2,1,2,1,
  	3,1,3,1,3,1,3,1,3,3,3,92,8,3,1,3,1,3,1,3,1,4,3,4,98,8,4,1,4,4,4,101,8,
  	4,11,4,12,4,102,1,5,1,5,4,5,107,8,5,11,5,12,5,108,3,5,111,8,5,1,5,1,5,
  	1,6,1,6,1,6,5,6,118,8,6,10,6,12,6,121,9,6,1,7,1,7,1,7,3,7,126,8,7,1,7,
  	1,7,1,7,1,7,3,7,132,8,7,3,7,134,8,7,1,8,1,8,1,8,5,8,139,8,8,10,8,12,8,
  	142,9,8,1,9,1,9,3,9,146,8,9,1,10,1,10,1,10,3,10,151,8,10,1,11,1,11,1,
  	11,1,11,1,12,1,12,1,12,1,12,1,12,1,12,3,12,163,8,12,1,13,1,13,1,13,3,
  	13,168,8,13,1,14,1,14,1,14,1,14,1,14,4,14,175,8,14,11,14,12,14,176,3,
  	14,179,8,14,1,15,1,15,1,15,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,4,
  	16,192,8,16,11,16,12,16,193,3,16,196,8,16,1,17,1,17,1,17,1,17,1,17,1,
  	17,1,17,1,17,1,17,1,17,1,18,1,18,1,18,1,18,1,19,1,19,1,19,1,19,1,19,1,
  	19,1,19,1,19,1,19,1,19,3,19,222,8,19,1,20,1,20,3,20,226,8,20,1,20,1,20,
  	1,21,1,21,3,21,232,8,21,1,21,3,21,235,8,21,1,22,1,22,5,22,239,8,22,10,
  	22,12,22,242,9,22,1,23,1,23,1,24,1,24,1,25,1,25,1,26,1,26,1,27,1,27,4,
  	27,254,8,27,11,27,12,27,255,1,27,0,0,28,0,2,4,6,8,10,12,14,16,18,20,22,
  	24,26,28,30,32,34,36,38,40,42,44,46,48,50,52,54,0,5,2,0,39,39,42,42,1,
  	0,43,44,2,0,41,41,44,44,1,0,19,24,1,0,27,36,269,0,58,1,0,0,0,2,64,1,0,
  	0,0,4,72,1,0,0,0,6,86,1,0,0,0,8,97,1,0,0,0,10,110,1,0,0,0,12,114,1,0,
  	0,0,14,133,1,0,0,0,16,135,1,0,0,0,18,143,1,0,0,0,20,150,1,0,0,0,22,152,
  	1,0,0,0,24,162,1,0,0,0,26,167,1,0,0,0,28,169,1,0,0,0,30,180,1,0,0,0,32,
  	183,1,0,0,0,34,197,1,0,0,0,36,207,1,0,0,0,38,211,1,0,0,0,40,223,1,0,0,
  	0,42,234,1,0,0,0,44,236,1,0,0,0,46,243,1,0,0,0,48,245,1,0,0,0,50,247,
  	1,0,0,0,52,249,1,0,0,0,54,251,1,0,0,0,56,59,3,4,2,0,57,59,3,6,3,0,58,
  	56,1,0,0,0,58,57,1,0,0,0,59,60,1,0,0,0,60,58,1,0,0,0,60,61,1,0,0,0,61,
  	62,1,0,0,0,62,63,5,0,0,1,63,1,1,0,0,0,64,65,3,42,21,0,65,66,7,0,0,0,66,
  	68,5,1,0,0,67,69,3,12,6,0,68,67,1,0,0,0,68,69,1,0,0,0,69,70,1,0,0,0,70,
  	71,5,2,0,0,71,3,1,0,0,0,72,73,5,3,0,0,73,75,3,2,1,0,74,76,3,54,27,0,75,
  	74,1,0,0,0,75,76,1,0,0,0,76,77,1,0,0,0,77,81,5,4,0,0,78,80,3,8,4,0,79,
  	78,1,0,0,0,80,83,1,0,0,0,81,79,1,0,0,0,81,82,1,0,0,0,82,84,1,0,0,0,83,
  	81,1,0,0,0,84,85,5,5,0,0,85,5,1,0,0,0,86,87,5,6,0,0,87,88,3,42,21,0,88,
  	89,7,0,0,0,89,91,5,1,0,0,90,92,3,16,8,0,91,90,1,0,0,0,91,92,1,0,0,0,92,
  	93,1,0,0,0,93,94,5,2,0,0,94,95,5,7,0,0,95,7,1,0,0,0,96,98,3,10,5,0,97,
  	96,1,0,0,0,97,98,1,0,0,0,98,100,1,0,0,0,99,101,3,20,10,0,100,99,1,0,0,
  	0,101,102,1,0,0,0,102,100,1,0,0,0,102,103,1,0,0,0,103,9,1,0,0,0,104,111,
  	5,38,0,0,105,107,5,43,0,0,106,105,1,0,0,0,107,108,1,0,0,0,108,106,1,0,
  	0,0,108,109,1,0,0,0,109,111,1,0,0,0,110,104,1,0,0,0,110,106,1,0,0,0,111,
  	112,1,0,0,0,112,113,5,8,0,0,113,11,1,0,0,0,114,119,3,14,7,0,115,116,5,
  	9,0,0,116,118,3,14,7,0,117,115,1,0,0,0,118,121,1,0,0,0,119,117,1,0,0,
  	0,119,120,1,0,0,0,120,13,1,0,0,0,121,119,1,0,0,0,122,134,5,41,0,0,123,
  	125,3,44,22,0,124,126,3,50,25,0,125,124,1,0,0,0,125,126,1,0,0,0,126,131,
  	1,0,0,0,127,132,5,38,0,0,128,132,5,41,0,0,129,132,5,42,0,0,130,132,7,
  	1,0,0,131,127,1,0,0,0,131,128,1,0,0,0,131,129,1,0,0,0,131,130,1,0,0,0,
  	132,134,1,0,0,0,133,122,1,0,0,0,133,123,1,0,0,0,134,15,1,0,0,0,135,140,
  	3,18,9,0,136,137,5,9,0,0,137,139,3,18,9,0,138,136,1,0,0,0,139,142,1,0,
  	0,0,140,138,1,0,0,0,140,141,1,0,0,0,141,17,1,0,0,0,142,140,1,0,0,0,143,
  	145,3,44,22,0,144,146,3,50,25,0,145,144,1,0,0,0,145,146,1,0,0,0,146,19,
  	1,0,0,0,147,151,3,22,11,0,148,151,3,26,13,0,149,151,5,7,0,0,150,147,1,
  	0,0,0,150,148,1,0,0,0,150,149,1,0,0,0,151,21,1,0,0,0,152,153,5,41,0,0,
  	153,154,5,10,0,0,154,155,3,24,12,0,155,23,1,0,0,0,156,163,3,28,14,0,157,
  	163,3,30,15,0,158,163,3,32,16,0,159,163,3,38,19,0,160,163,3,40,20,0,161,
  	163,5,42,0,0,162,156,1,0,0,0,162,157,1,0,0,0,162,158,1,0,0,0,162,159,
  	1,0,0,0,162,160,1,0,0,0,162,161,1,0,0,0,163,25,1,0,0,0,164,168,3,36,18,
  	0,165,168,3,34,17,0,166,168,3,30,15,0,167,164,1,0,0,0,167,165,1,0,0,0,
  	167,166,1,0,0,0,168,27,1,0,0,0,169,170,5,11,0,0,170,178,3,44,22,0,171,
  	172,5,9,0,0,172,174,5,12,0,0,173,175,5,43,0,0,174,173,1,0,0,0,175,176,
  	1,0,0,0,176,174,1,0,0,0,176,177,1,0,0,0,177,179,1,0,0,0,178,171,1,0,0,
  	0,178,179,1,0,0,0,179,29,1,0,0,0,180,181,5,13,0,0,181,182,3,2,1,0,182,
  	31,1,0,0,0,183,184,5,14,0,0,184,185,3,44,22,0,185,186,5,9,0,0,186,187,
  	3,44,22,0,187,195,5,41,0,0,188,189,5,9,0,0,189,191,5,12,0,0,190,192,5,
  	43,0,0,191,190,1,0,0,0,192,193,1,0,0,0,193,191,1,0,0,0,193,194,1,0,0,
  	0,194,196,1,0,0,0,195,188,1,0,0,0,195,196,1,0,0,0,196,33,1,0,0,0,197,
  	198,5,15,0,0,198,199,3,44,22,0,199,200,7,2,0,0,200,201,5,9,0,0,201,202,
  	5,16,0,0,202,203,5,41,0,0,203,204,5,9,0,0,204,205,5,16,0,0,205,206,5,
  	41,0,0,206,35,1,0,0,0,207,208,5,15,0,0,208,209,5,16,0,0,209,210,5,41,
  	0,0,210,37,1,0,0,0,211,212,5,17,0,0,212,213,3,52,26,0,213,214,3,44,22,
  	0,214,215,5,41,0,0,215,221,5,9,0,0,216,222,5,43,0,0,217,222,5,44,0,0,
  	218,222,5,41,0,0,219,222,3,40,20,0,220,222,5,42,0,0,221,216,1,0,0,0,221,
  	217,1,0,0,0,221,218,1,0,0,0,221,219,1,0,0,0,221,220,1,0,0,0,222,39,1,
  	0,0,0,223,225,3,44,22,0,224,226,3,50,25,0,225,224,1,0,0,0,225,226,1,0,
  	0,0,226,227,1,0,0,0,227,228,5,44,0,0,228,41,1,0,0,0,229,231,3,44,22,0,
  	230,232,3,50,25,0,231,230,1,0,0,0,231,232,1,0,0,0,232,235,1,0,0,0,233,
  	235,5,18,0,0,234,229,1,0,0,0,234,233,1,0,0,0,235,43,1,0,0,0,236,240,3,
  	46,23,0,237,239,3,48,24,0,238,237,1,0,0,0,239,242,1,0,0,0,240,238,1,0,
  	0,0,240,241,1,0,0,0,241,45,1,0,0,0,242,240,1,0,0,0,243,244,7,3,0,0,244,
  	47,1,0,0,0,245,246,5,25,0,0,246,49,1,0,0,0,247,248,5,26,0,0,248,51,1,
  	0,0,0,249,250,7,4,0,0,250,53,1,0,0,0,251,253,5,37,0,0,252,254,5,43,0,
  	0,253,252,1,0,0,0,254,255,1,0,0,0,255,253,1,0,0,0,255,256,1,0,0,0,256,
  	55,1,0,0,0,29,58,60,68,75,81,91,97,102,108,110,119,125,131,133,140,145,
  	150,162,167,176,178,193,195,221,225,231,234,240,255
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  netqirParserStaticData = std::move(staticData);
}

}

NetQIRParser::NetQIRParser(TokenStream *input) : NetQIRParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

NetQIRParser::NetQIRParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  NetQIRParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *netqirParserStaticData->atn, netqirParserStaticData->decisionToDFA, netqirParserStaticData->sharedContextCache, options);
}

NetQIRParser::~NetQIRParser() {
  delete _interpreter;
}

const atn::ATN& NetQIRParser::getATN() const {
  return *netqirParserStaticData->atn;
}

std::string NetQIRParser::getGrammarFileName() const {
  return "NetQIR.g4";
}

const std::vector<std::string>& NetQIRParser::getRuleNames() const {
  return netqirParserStaticData->ruleNames;
}

const dfa::Vocabulary& NetQIRParser::getVocabulary() const {
  return netqirParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView NetQIRParser::getSerializedATN() const {
  return netqirParserStaticData->serializedATN;
}


//----------------- TopLevelContext ------------------------------------------------------------------

NetQIRParser::TopLevelContext::TopLevelContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NetQIRParser::TopLevelContext::EOF() {
  return getToken(NetQIRParser::EOF, 0);
}

std::vector<NetQIRParser::FunctionDefinitionContext *> NetQIRParser::TopLevelContext::functionDefinition() {
  return getRuleContexts<NetQIRParser::FunctionDefinitionContext>();
}

NetQIRParser::FunctionDefinitionContext* NetQIRParser::TopLevelContext::functionDefinition(size_t i) {
  return getRuleContext<NetQIRParser::FunctionDefinitionContext>(i);
}

std::vector<NetQIRParser::DeclarationDefinitionContext *> NetQIRParser::TopLevelContext::declarationDefinition() {
  return getRuleContexts<NetQIRParser::DeclarationDefinitionContext>();
}

NetQIRParser::DeclarationDefinitionContext* NetQIRParser::TopLevelContext::declarationDefinition(size_t i) {
  return getRuleContext<NetQIRParser::DeclarationDefinitionContext>(i);
}


size_t NetQIRParser::TopLevelContext::getRuleIndex() const {
  return NetQIRParser::RuleTopLevel;
}

void NetQIRParser::TopLevelContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NetQIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTopLevel(this);
}

void NetQIRParser::TopLevelContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NetQIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTopLevel(this);
}

NetQIRParser::TopLevelContext* NetQIRParser::topLevel() {
  TopLevelContext *_localctx = _tracker.createInstance<TopLevelContext>(_ctx, getState());
  enterRule(_localctx, 0, NetQIRParser::RuleTopLevel);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(58); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(58);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case NetQIRParser::T__2: {
          setState(56);
          functionDefinition();
          break;
        }

        case NetQIRParser::T__5: {
          setState(57);
          declarationDefinition();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(60); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == NetQIRParser::T__2

    || _la == NetQIRParser::T__5);
    setState(62);
    match(NetQIRParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionContext ------------------------------------------------------------------

NetQIRParser::FunctionContext::FunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NetQIRParser::ReturnTypeContext* NetQIRParser::FunctionContext::returnType() {
  return getRuleContext<NetQIRParser::ReturnTypeContext>(0);
}

tree::TerminalNode* NetQIRParser::FunctionContext::GLOBAL() {
  return getToken(NetQIRParser::GLOBAL, 0);
}

tree::TerminalNode* NetQIRParser::FunctionContext::NETQIR() {
  return getToken(NetQIRParser::NETQIR, 0);
}

NetQIRParser::ArgListContext* NetQIRParser::FunctionContext::argList() {
  return getRuleContext<NetQIRParser::ArgListContext>(0);
}


size_t NetQIRParser::FunctionContext::getRuleIndex() const {
  return NetQIRParser::RuleFunction;
}

void NetQIRParser::FunctionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NetQIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction(this);
}

void NetQIRParser::FunctionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NetQIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction(this);
}

NetQIRParser::FunctionContext* NetQIRParser::function() {
  FunctionContext *_localctx = _tracker.createInstance<FunctionContext>(_ctx, getState());
  enterRule(_localctx, 2, NetQIRParser::RuleFunction);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(64);
    returnType();
    setState(65);
    _la = _input->LA(1);
    if (!(_la == NetQIRParser::NETQIR

    || _la == NetQIRParser::GLOBAL)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(66);
    match(NetQIRParser::T__0);
    setState(68);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2199056285696) != 0)) {
      setState(67);
      argList();
    }
    setState(70);
    match(NetQIRParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDefinitionContext ------------------------------------------------------------------

NetQIRParser::FunctionDefinitionContext::FunctionDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NetQIRParser::FunctionContext* NetQIRParser::FunctionDefinitionContext::function() {
  return getRuleContext<NetQIRParser::FunctionContext>(0);
}

NetQIRParser::AttributeBlockContext* NetQIRParser::FunctionDefinitionContext::attributeBlock() {
  return getRuleContext<NetQIRParser::AttributeBlockContext>(0);
}

std::vector<NetQIRParser::BlockContext *> NetQIRParser::FunctionDefinitionContext::block() {
  return getRuleContexts<NetQIRParser::BlockContext>();
}

NetQIRParser::BlockContext* NetQIRParser::FunctionDefinitionContext::block(size_t i) {
  return getRuleContext<NetQIRParser::BlockContext>(i);
}


size_t NetQIRParser::FunctionDefinitionContext::getRuleIndex() const {
  return NetQIRParser::RuleFunctionDefinition;
}

void NetQIRParser::FunctionDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NetQIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionDefinition(this);
}

void NetQIRParser::FunctionDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NetQIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionDefinition(this);
}

NetQIRParser::FunctionDefinitionContext* NetQIRParser::functionDefinition() {
  FunctionDefinitionContext *_localctx = _tracker.createInstance<FunctionDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 4, NetQIRParser::RuleFunctionDefinition);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(72);
    match(NetQIRParser::T__2);
    setState(73);
    function();
    setState(75);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NetQIRParser::T__36) {
      setState(74);
      attributeBlock();
    }
    setState(77);
    match(NetQIRParser::T__3);
    setState(81);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 11269994225792) != 0)) {
      setState(78);
      block();
      setState(83);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(84);
    match(NetQIRParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationDefinitionContext ------------------------------------------------------------------

NetQIRParser::DeclarationDefinitionContext::DeclarationDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NetQIRParser::ReturnTypeContext* NetQIRParser::DeclarationDefinitionContext::returnType() {
  return getRuleContext<NetQIRParser::ReturnTypeContext>(0);
}

tree::TerminalNode* NetQIRParser::DeclarationDefinitionContext::GLOBAL() {
  return getToken(NetQIRParser::GLOBAL, 0);
}

tree::TerminalNode* NetQIRParser::DeclarationDefinitionContext::NETQIR() {
  return getToken(NetQIRParser::NETQIR, 0);
}

NetQIRParser::DeclParamListContext* NetQIRParser::DeclarationDefinitionContext::declParamList() {
  return getRuleContext<NetQIRParser::DeclParamListContext>(0);
}


size_t NetQIRParser::DeclarationDefinitionContext::getRuleIndex() const {
  return NetQIRParser::RuleDeclarationDefinition;
}

void NetQIRParser::DeclarationDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NetQIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarationDefinition(this);
}

void NetQIRParser::DeclarationDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NetQIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarationDefinition(this);
}

NetQIRParser::DeclarationDefinitionContext* NetQIRParser::declarationDefinition() {
  DeclarationDefinitionContext *_localctx = _tracker.createInstance<DeclarationDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 6, NetQIRParser::RuleDeclarationDefinition);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(86);
    match(NetQIRParser::T__5);
    setState(87);
    returnType();
    setState(88);
    _la = _input->LA(1);
    if (!(_la == NetQIRParser::NETQIR

    || _la == NetQIRParser::GLOBAL)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(89);
    match(NetQIRParser::T__0);
    setState(91);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 33030144) != 0)) {
      setState(90);
      declParamList();
    }
    setState(93);
    match(NetQIRParser::T__1);
    setState(94);
    match(NetQIRParser::T__6);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

NetQIRParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NetQIRParser::TagContext* NetQIRParser::BlockContext::tag() {
  return getRuleContext<NetQIRParser::TagContext>(0);
}

std::vector<NetQIRParser::StatementContext *> NetQIRParser::BlockContext::statement() {
  return getRuleContexts<NetQIRParser::StatementContext>();
}

NetQIRParser::StatementContext* NetQIRParser::BlockContext::statement(size_t i) {
  return getRuleContext<NetQIRParser::StatementContext>(i);
}


size_t NetQIRParser::BlockContext::getRuleIndex() const {
  return NetQIRParser::RuleBlock;
}

void NetQIRParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NetQIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void NetQIRParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NetQIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}

NetQIRParser::BlockContext* NetQIRParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 8, NetQIRParser::RuleBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(97);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NetQIRParser::IDENTIFIER

    || _la == NetQIRParser::DIGIT) {
      setState(96);
      tag();
    }
    setState(100); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(99);
              statement();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(102); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TagContext ------------------------------------------------------------------

NetQIRParser::TagContext::TagContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NetQIRParser::TagContext::IDENTIFIER() {
  return getToken(NetQIRParser::IDENTIFIER, 0);
}

std::vector<tree::TerminalNode *> NetQIRParser::TagContext::DIGIT() {
  return getTokens(NetQIRParser::DIGIT);
}

tree::TerminalNode* NetQIRParser::TagContext::DIGIT(size_t i) {
  return getToken(NetQIRParser::DIGIT, i);
}


size_t NetQIRParser::TagContext::getRuleIndex() const {
  return NetQIRParser::RuleTag;
}

void NetQIRParser::TagContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NetQIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTag(this);
}

void NetQIRParser::TagContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NetQIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTag(this);
}

NetQIRParser::TagContext* NetQIRParser::tag() {
  TagContext *_localctx = _tracker.createInstance<TagContext>(_ctx, getState());
  enterRule(_localctx, 10, NetQIRParser::RuleTag);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(110);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case NetQIRParser::IDENTIFIER: {
        setState(104);
        match(NetQIRParser::IDENTIFIER);
        break;
      }

      case NetQIRParser::DIGIT: {
        setState(106); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(105);
          match(NetQIRParser::DIGIT);
          setState(108); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (_la == NetQIRParser::DIGIT);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(112);
    match(NetQIRParser::T__7);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgListContext ------------------------------------------------------------------

NetQIRParser::ArgListContext::ArgListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<NetQIRParser::ArgContext *> NetQIRParser::ArgListContext::arg() {
  return getRuleContexts<NetQIRParser::ArgContext>();
}

NetQIRParser::ArgContext* NetQIRParser::ArgListContext::arg(size_t i) {
  return getRuleContext<NetQIRParser::ArgContext>(i);
}


size_t NetQIRParser::ArgListContext::getRuleIndex() const {
  return NetQIRParser::RuleArgList;
}

void NetQIRParser::ArgListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NetQIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgList(this);
}

void NetQIRParser::ArgListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NetQIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgList(this);
}

NetQIRParser::ArgListContext* NetQIRParser::argList() {
  ArgListContext *_localctx = _tracker.createInstance<ArgListContext>(_ctx, getState());
  enterRule(_localctx, 12, NetQIRParser::RuleArgList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(114);
    arg();
    setState(119);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == NetQIRParser::T__8) {
      setState(115);
      match(NetQIRParser::T__8);
      setState(116);
      arg();
      setState(121);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgContext ------------------------------------------------------------------

NetQIRParser::ArgContext::ArgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NetQIRParser::ArgContext::REGISTER() {
  return getToken(NetQIRParser::REGISTER, 0);
}

NetQIRParser::TypeContext* NetQIRParser::ArgContext::type() {
  return getRuleContext<NetQIRParser::TypeContext>(0);
}

tree::TerminalNode* NetQIRParser::ArgContext::IDENTIFIER() {
  return getToken(NetQIRParser::IDENTIFIER, 0);
}

tree::TerminalNode* NetQIRParser::ArgContext::GLOBAL() {
  return getToken(NetQIRParser::GLOBAL, 0);
}

NetQIRParser::ModifierContext* NetQIRParser::ArgContext::modifier() {
  return getRuleContext<NetQIRParser::ModifierContext>(0);
}

tree::TerminalNode* NetQIRParser::ArgContext::INT() {
  return getToken(NetQIRParser::INT, 0);
}

tree::TerminalNode* NetQIRParser::ArgContext::DIGIT() {
  return getToken(NetQIRParser::DIGIT, 0);
}


size_t NetQIRParser::ArgContext::getRuleIndex() const {
  return NetQIRParser::RuleArg;
}

void NetQIRParser::ArgContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NetQIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArg(this);
}

void NetQIRParser::ArgContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NetQIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArg(this);
}

NetQIRParser::ArgContext* NetQIRParser::arg() {
  ArgContext *_localctx = _tracker.createInstance<ArgContext>(_ctx, getState());
  enterRule(_localctx, 14, NetQIRParser::RuleArg);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(133);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case NetQIRParser::REGISTER: {
        enterOuterAlt(_localctx, 1);
        setState(122);
        match(NetQIRParser::REGISTER);
        break;
      }

      case NetQIRParser::T__18:
      case NetQIRParser::T__19:
      case NetQIRParser::T__20:
      case NetQIRParser::T__21:
      case NetQIRParser::T__22:
      case NetQIRParser::T__23: {
        enterOuterAlt(_localctx, 2);
        setState(123);
        type();
        setState(125);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == NetQIRParser::T__25) {
          setState(124);
          modifier();
        }
        setState(131);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case NetQIRParser::IDENTIFIER: {
            setState(127);
            match(NetQIRParser::IDENTIFIER);
            break;
          }

          case NetQIRParser::REGISTER: {
            setState(128);
            match(NetQIRParser::REGISTER);
            break;
          }

          case NetQIRParser::GLOBAL: {
            setState(129);
            match(NetQIRParser::GLOBAL);
            break;
          }

          case NetQIRParser::DIGIT:
          case NetQIRParser::INT: {
            setState(130);
            _la = _input->LA(1);
            if (!(_la == NetQIRParser::DIGIT

            || _la == NetQIRParser::INT)) {
            _errHandler->recoverInline(this);
            }
            else {
              _errHandler->reportMatch(this);
              consume();
            }
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclParamListContext ------------------------------------------------------------------

NetQIRParser::DeclParamListContext::DeclParamListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<NetQIRParser::DeclParamContext *> NetQIRParser::DeclParamListContext::declParam() {
  return getRuleContexts<NetQIRParser::DeclParamContext>();
}

NetQIRParser::DeclParamContext* NetQIRParser::DeclParamListContext::declParam(size_t i) {
  return getRuleContext<NetQIRParser::DeclParamContext>(i);
}


size_t NetQIRParser::DeclParamListContext::getRuleIndex() const {
  return NetQIRParser::RuleDeclParamList;
}

void NetQIRParser::DeclParamListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NetQIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclParamList(this);
}

void NetQIRParser::DeclParamListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NetQIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclParamList(this);
}

NetQIRParser::DeclParamListContext* NetQIRParser::declParamList() {
  DeclParamListContext *_localctx = _tracker.createInstance<DeclParamListContext>(_ctx, getState());
  enterRule(_localctx, 16, NetQIRParser::RuleDeclParamList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(135);
    declParam();
    setState(140);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == NetQIRParser::T__8) {
      setState(136);
      match(NetQIRParser::T__8);
      setState(137);
      declParam();
      setState(142);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclParamContext ------------------------------------------------------------------

NetQIRParser::DeclParamContext::DeclParamContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NetQIRParser::TypeContext* NetQIRParser::DeclParamContext::type() {
  return getRuleContext<NetQIRParser::TypeContext>(0);
}

NetQIRParser::ModifierContext* NetQIRParser::DeclParamContext::modifier() {
  return getRuleContext<NetQIRParser::ModifierContext>(0);
}


size_t NetQIRParser::DeclParamContext::getRuleIndex() const {
  return NetQIRParser::RuleDeclParam;
}

void NetQIRParser::DeclParamContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NetQIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclParam(this);
}

void NetQIRParser::DeclParamContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NetQIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclParam(this);
}

NetQIRParser::DeclParamContext* NetQIRParser::declParam() {
  DeclParamContext *_localctx = _tracker.createInstance<DeclParamContext>(_ctx, getState());
  enterRule(_localctx, 18, NetQIRParser::RuleDeclParam);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(143);
    type();
    setState(145);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NetQIRParser::T__25) {
      setState(144);
      modifier();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

NetQIRParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NetQIRParser::AssignmentContext* NetQIRParser::StatementContext::assignment() {
  return getRuleContext<NetQIRParser::AssignmentContext>(0);
}

NetQIRParser::NoAssignmentInstructionContext* NetQIRParser::StatementContext::noAssignmentInstruction() {
  return getRuleContext<NetQIRParser::NoAssignmentInstructionContext>(0);
}


size_t NetQIRParser::StatementContext::getRuleIndex() const {
  return NetQIRParser::RuleStatement;
}

void NetQIRParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NetQIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void NetQIRParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NetQIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}

NetQIRParser::StatementContext* NetQIRParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 20, NetQIRParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(150);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case NetQIRParser::REGISTER: {
        enterOuterAlt(_localctx, 1);
        setState(147);
        assignment();
        break;
      }

      case NetQIRParser::T__12:
      case NetQIRParser::T__14: {
        enterOuterAlt(_localctx, 2);
        setState(148);
        noAssignmentInstruction();
        break;
      }

      case NetQIRParser::T__6: {
        enterOuterAlt(_localctx, 3);
        setState(149);
        match(NetQIRParser::T__6);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentContext ------------------------------------------------------------------

NetQIRParser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NetQIRParser::AssignmentContext::REGISTER() {
  return getToken(NetQIRParser::REGISTER, 0);
}

NetQIRParser::AssignmentInstructionContext* NetQIRParser::AssignmentContext::assignmentInstruction() {
  return getRuleContext<NetQIRParser::AssignmentInstructionContext>(0);
}


size_t NetQIRParser::AssignmentContext::getRuleIndex() const {
  return NetQIRParser::RuleAssignment;
}

void NetQIRParser::AssignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NetQIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment(this);
}

void NetQIRParser::AssignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NetQIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment(this);
}

NetQIRParser::AssignmentContext* NetQIRParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 22, NetQIRParser::RuleAssignment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(152);
    match(NetQIRParser::REGISTER);
    setState(153);
    match(NetQIRParser::T__9);
    setState(154);
    assignmentInstruction();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentInstructionContext ------------------------------------------------------------------

NetQIRParser::AssignmentInstructionContext::AssignmentInstructionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NetQIRParser::AllocationContext* NetQIRParser::AssignmentInstructionContext::allocation() {
  return getRuleContext<NetQIRParser::AllocationContext>(0);
}

NetQIRParser::FunctionCallContext* NetQIRParser::AssignmentInstructionContext::functionCall() {
  return getRuleContext<NetQIRParser::FunctionCallContext>(0);
}

NetQIRParser::LoadInstructionContext* NetQIRParser::AssignmentInstructionContext::loadInstruction() {
  return getRuleContext<NetQIRParser::LoadInstructionContext>(0);
}

NetQIRParser::ComparisonInstructionContext* NetQIRParser::AssignmentInstructionContext::comparisonInstruction() {
  return getRuleContext<NetQIRParser::ComparisonInstructionContext>(0);
}

NetQIRParser::ConstantContext* NetQIRParser::AssignmentInstructionContext::constant() {
  return getRuleContext<NetQIRParser::ConstantContext>(0);
}

tree::TerminalNode* NetQIRParser::AssignmentInstructionContext::GLOBAL() {
  return getToken(NetQIRParser::GLOBAL, 0);
}


size_t NetQIRParser::AssignmentInstructionContext::getRuleIndex() const {
  return NetQIRParser::RuleAssignmentInstruction;
}

void NetQIRParser::AssignmentInstructionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NetQIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignmentInstruction(this);
}

void NetQIRParser::AssignmentInstructionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NetQIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignmentInstruction(this);
}

NetQIRParser::AssignmentInstructionContext* NetQIRParser::assignmentInstruction() {
  AssignmentInstructionContext *_localctx = _tracker.createInstance<AssignmentInstructionContext>(_ctx, getState());
  enterRule(_localctx, 24, NetQIRParser::RuleAssignmentInstruction);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(162);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case NetQIRParser::T__10: {
        setState(156);
        allocation();
        break;
      }

      case NetQIRParser::T__12: {
        setState(157);
        functionCall();
        break;
      }

      case NetQIRParser::T__13: {
        setState(158);
        loadInstruction();
        break;
      }

      case NetQIRParser::T__16: {
        setState(159);
        comparisonInstruction();
        break;
      }

      case NetQIRParser::T__18:
      case NetQIRParser::T__19:
      case NetQIRParser::T__20:
      case NetQIRParser::T__21:
      case NetQIRParser::T__22:
      case NetQIRParser::T__23: {
        setState(160);
        constant();
        break;
      }

      case NetQIRParser::GLOBAL: {
        setState(161);
        match(NetQIRParser::GLOBAL);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NoAssignmentInstructionContext ------------------------------------------------------------------

NetQIRParser::NoAssignmentInstructionContext::NoAssignmentInstructionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NetQIRParser::BranchUncondInstructionContext* NetQIRParser::NoAssignmentInstructionContext::branchUncondInstruction() {
  return getRuleContext<NetQIRParser::BranchUncondInstructionContext>(0);
}

NetQIRParser::BranchCondInstructionContext* NetQIRParser::NoAssignmentInstructionContext::branchCondInstruction() {
  return getRuleContext<NetQIRParser::BranchCondInstructionContext>(0);
}

NetQIRParser::FunctionCallContext* NetQIRParser::NoAssignmentInstructionContext::functionCall() {
  return getRuleContext<NetQIRParser::FunctionCallContext>(0);
}


size_t NetQIRParser::NoAssignmentInstructionContext::getRuleIndex() const {
  return NetQIRParser::RuleNoAssignmentInstruction;
}

void NetQIRParser::NoAssignmentInstructionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NetQIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNoAssignmentInstruction(this);
}

void NetQIRParser::NoAssignmentInstructionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NetQIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNoAssignmentInstruction(this);
}

NetQIRParser::NoAssignmentInstructionContext* NetQIRParser::noAssignmentInstruction() {
  NoAssignmentInstructionContext *_localctx = _tracker.createInstance<NoAssignmentInstructionContext>(_ctx, getState());
  enterRule(_localctx, 26, NetQIRParser::RuleNoAssignmentInstruction);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(167);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      setState(164);
      branchUncondInstruction();
      break;
    }

    case 2: {
      setState(165);
      branchCondInstruction();
      break;
    }

    case 3: {
      setState(166);
      functionCall();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AllocationContext ------------------------------------------------------------------

NetQIRParser::AllocationContext::AllocationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NetQIRParser::TypeContext* NetQIRParser::AllocationContext::type() {
  return getRuleContext<NetQIRParser::TypeContext>(0);
}

std::vector<tree::TerminalNode *> NetQIRParser::AllocationContext::DIGIT() {
  return getTokens(NetQIRParser::DIGIT);
}

tree::TerminalNode* NetQIRParser::AllocationContext::DIGIT(size_t i) {
  return getToken(NetQIRParser::DIGIT, i);
}


size_t NetQIRParser::AllocationContext::getRuleIndex() const {
  return NetQIRParser::RuleAllocation;
}

void NetQIRParser::AllocationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NetQIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAllocation(this);
}

void NetQIRParser::AllocationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NetQIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAllocation(this);
}

NetQIRParser::AllocationContext* NetQIRParser::allocation() {
  AllocationContext *_localctx = _tracker.createInstance<AllocationContext>(_ctx, getState());
  enterRule(_localctx, 28, NetQIRParser::RuleAllocation);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(169);
    match(NetQIRParser::T__10);
    setState(170);
    type();
    setState(178);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NetQIRParser::T__8) {
      setState(171);
      match(NetQIRParser::T__8);
      setState(172);
      match(NetQIRParser::T__11);
      setState(174); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(173);
                match(NetQIRParser::DIGIT);
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(176); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionCallContext ------------------------------------------------------------------

NetQIRParser::FunctionCallContext::FunctionCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NetQIRParser::FunctionContext* NetQIRParser::FunctionCallContext::function() {
  return getRuleContext<NetQIRParser::FunctionContext>(0);
}


size_t NetQIRParser::FunctionCallContext::getRuleIndex() const {
  return NetQIRParser::RuleFunctionCall;
}

void NetQIRParser::FunctionCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NetQIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionCall(this);
}

void NetQIRParser::FunctionCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NetQIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionCall(this);
}

NetQIRParser::FunctionCallContext* NetQIRParser::functionCall() {
  FunctionCallContext *_localctx = _tracker.createInstance<FunctionCallContext>(_ctx, getState());
  enterRule(_localctx, 30, NetQIRParser::RuleFunctionCall);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(180);
    match(NetQIRParser::T__12);
    setState(181);
    function();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoadInstructionContext ------------------------------------------------------------------

NetQIRParser::LoadInstructionContext::LoadInstructionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<NetQIRParser::TypeContext *> NetQIRParser::LoadInstructionContext::type() {
  return getRuleContexts<NetQIRParser::TypeContext>();
}

NetQIRParser::TypeContext* NetQIRParser::LoadInstructionContext::type(size_t i) {
  return getRuleContext<NetQIRParser::TypeContext>(i);
}

tree::TerminalNode* NetQIRParser::LoadInstructionContext::REGISTER() {
  return getToken(NetQIRParser::REGISTER, 0);
}

std::vector<tree::TerminalNode *> NetQIRParser::LoadInstructionContext::DIGIT() {
  return getTokens(NetQIRParser::DIGIT);
}

tree::TerminalNode* NetQIRParser::LoadInstructionContext::DIGIT(size_t i) {
  return getToken(NetQIRParser::DIGIT, i);
}


size_t NetQIRParser::LoadInstructionContext::getRuleIndex() const {
  return NetQIRParser::RuleLoadInstruction;
}

void NetQIRParser::LoadInstructionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NetQIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoadInstruction(this);
}

void NetQIRParser::LoadInstructionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NetQIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoadInstruction(this);
}

NetQIRParser::LoadInstructionContext* NetQIRParser::loadInstruction() {
  LoadInstructionContext *_localctx = _tracker.createInstance<LoadInstructionContext>(_ctx, getState());
  enterRule(_localctx, 32, NetQIRParser::RuleLoadInstruction);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(183);
    match(NetQIRParser::T__13);
    setState(184);
    type();
    setState(185);
    match(NetQIRParser::T__8);
    setState(186);
    type();
    setState(187);
    match(NetQIRParser::REGISTER);
    setState(195);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NetQIRParser::T__8) {
      setState(188);
      match(NetQIRParser::T__8);
      setState(189);
      match(NetQIRParser::T__11);
      setState(191); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(190);
                match(NetQIRParser::DIGIT);
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(193); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BranchCondInstructionContext ------------------------------------------------------------------

NetQIRParser::BranchCondInstructionContext::BranchCondInstructionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NetQIRParser::TypeContext* NetQIRParser::BranchCondInstructionContext::type() {
  return getRuleContext<NetQIRParser::TypeContext>(0);
}

std::vector<tree::TerminalNode *> NetQIRParser::BranchCondInstructionContext::REGISTER() {
  return getTokens(NetQIRParser::REGISTER);
}

tree::TerminalNode* NetQIRParser::BranchCondInstructionContext::REGISTER(size_t i) {
  return getToken(NetQIRParser::REGISTER, i);
}

tree::TerminalNode* NetQIRParser::BranchCondInstructionContext::INT() {
  return getToken(NetQIRParser::INT, 0);
}


size_t NetQIRParser::BranchCondInstructionContext::getRuleIndex() const {
  return NetQIRParser::RuleBranchCondInstruction;
}

void NetQIRParser::BranchCondInstructionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NetQIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBranchCondInstruction(this);
}

void NetQIRParser::BranchCondInstructionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NetQIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBranchCondInstruction(this);
}

NetQIRParser::BranchCondInstructionContext* NetQIRParser::branchCondInstruction() {
  BranchCondInstructionContext *_localctx = _tracker.createInstance<BranchCondInstructionContext>(_ctx, getState());
  enterRule(_localctx, 34, NetQIRParser::RuleBranchCondInstruction);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(197);
    match(NetQIRParser::T__14);
    setState(198);
    type();
    setState(199);
    _la = _input->LA(1);
    if (!(_la == NetQIRParser::REGISTER

    || _la == NetQIRParser::INT)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(200);
    match(NetQIRParser::T__8);
    setState(201);
    match(NetQIRParser::T__15);
    setState(202);
    match(NetQIRParser::REGISTER);
    setState(203);
    match(NetQIRParser::T__8);
    setState(204);
    match(NetQIRParser::T__15);
    setState(205);
    match(NetQIRParser::REGISTER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BranchUncondInstructionContext ------------------------------------------------------------------

NetQIRParser::BranchUncondInstructionContext::BranchUncondInstructionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NetQIRParser::BranchUncondInstructionContext::REGISTER() {
  return getToken(NetQIRParser::REGISTER, 0);
}


size_t NetQIRParser::BranchUncondInstructionContext::getRuleIndex() const {
  return NetQIRParser::RuleBranchUncondInstruction;
}

void NetQIRParser::BranchUncondInstructionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NetQIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBranchUncondInstruction(this);
}

void NetQIRParser::BranchUncondInstructionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NetQIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBranchUncondInstruction(this);
}

NetQIRParser::BranchUncondInstructionContext* NetQIRParser::branchUncondInstruction() {
  BranchUncondInstructionContext *_localctx = _tracker.createInstance<BranchUncondInstructionContext>(_ctx, getState());
  enterRule(_localctx, 36, NetQIRParser::RuleBranchUncondInstruction);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(207);
    match(NetQIRParser::T__14);
    setState(208);
    match(NetQIRParser::T__15);
    setState(209);
    match(NetQIRParser::REGISTER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ComparisonInstructionContext ------------------------------------------------------------------

NetQIRParser::ComparisonInstructionContext::ComparisonInstructionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NetQIRParser::ComparisonOpContext* NetQIRParser::ComparisonInstructionContext::comparisonOp() {
  return getRuleContext<NetQIRParser::ComparisonOpContext>(0);
}

NetQIRParser::TypeContext* NetQIRParser::ComparisonInstructionContext::type() {
  return getRuleContext<NetQIRParser::TypeContext>(0);
}

std::vector<tree::TerminalNode *> NetQIRParser::ComparisonInstructionContext::REGISTER() {
  return getTokens(NetQIRParser::REGISTER);
}

tree::TerminalNode* NetQIRParser::ComparisonInstructionContext::REGISTER(size_t i) {
  return getToken(NetQIRParser::REGISTER, i);
}

tree::TerminalNode* NetQIRParser::ComparisonInstructionContext::DIGIT() {
  return getToken(NetQIRParser::DIGIT, 0);
}

tree::TerminalNode* NetQIRParser::ComparisonInstructionContext::INT() {
  return getToken(NetQIRParser::INT, 0);
}

NetQIRParser::ConstantContext* NetQIRParser::ComparisonInstructionContext::constant() {
  return getRuleContext<NetQIRParser::ConstantContext>(0);
}

tree::TerminalNode* NetQIRParser::ComparisonInstructionContext::GLOBAL() {
  return getToken(NetQIRParser::GLOBAL, 0);
}


size_t NetQIRParser::ComparisonInstructionContext::getRuleIndex() const {
  return NetQIRParser::RuleComparisonInstruction;
}

void NetQIRParser::ComparisonInstructionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NetQIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComparisonInstruction(this);
}

void NetQIRParser::ComparisonInstructionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NetQIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComparisonInstruction(this);
}

NetQIRParser::ComparisonInstructionContext* NetQIRParser::comparisonInstruction() {
  ComparisonInstructionContext *_localctx = _tracker.createInstance<ComparisonInstructionContext>(_ctx, getState());
  enterRule(_localctx, 38, NetQIRParser::RuleComparisonInstruction);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(211);
    match(NetQIRParser::T__16);
    setState(212);
    comparisonOp();
    setState(213);
    type();
    setState(214);
    match(NetQIRParser::REGISTER);
    setState(215);
    match(NetQIRParser::T__8);
    setState(221);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case NetQIRParser::DIGIT: {
        setState(216);
        match(NetQIRParser::DIGIT);
        break;
      }

      case NetQIRParser::INT: {
        setState(217);
        match(NetQIRParser::INT);
        break;
      }

      case NetQIRParser::REGISTER: {
        setState(218);
        match(NetQIRParser::REGISTER);
        break;
      }

      case NetQIRParser::T__18:
      case NetQIRParser::T__19:
      case NetQIRParser::T__20:
      case NetQIRParser::T__21:
      case NetQIRParser::T__22:
      case NetQIRParser::T__23: {
        setState(219);
        constant();
        break;
      }

      case NetQIRParser::GLOBAL: {
        setState(220);
        match(NetQIRParser::GLOBAL);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantContext ------------------------------------------------------------------

NetQIRParser::ConstantContext::ConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NetQIRParser::TypeContext* NetQIRParser::ConstantContext::type() {
  return getRuleContext<NetQIRParser::TypeContext>(0);
}

tree::TerminalNode* NetQIRParser::ConstantContext::INT() {
  return getToken(NetQIRParser::INT, 0);
}

NetQIRParser::ModifierContext* NetQIRParser::ConstantContext::modifier() {
  return getRuleContext<NetQIRParser::ModifierContext>(0);
}


size_t NetQIRParser::ConstantContext::getRuleIndex() const {
  return NetQIRParser::RuleConstant;
}

void NetQIRParser::ConstantContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NetQIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstant(this);
}

void NetQIRParser::ConstantContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NetQIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstant(this);
}

NetQIRParser::ConstantContext* NetQIRParser::constant() {
  ConstantContext *_localctx = _tracker.createInstance<ConstantContext>(_ctx, getState());
  enterRule(_localctx, 40, NetQIRParser::RuleConstant);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(223);
    type();
    setState(225);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NetQIRParser::T__25) {
      setState(224);
      modifier();
    }
    setState(227);
    match(NetQIRParser::INT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnTypeContext ------------------------------------------------------------------

NetQIRParser::ReturnTypeContext::ReturnTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NetQIRParser::TypeContext* NetQIRParser::ReturnTypeContext::type() {
  return getRuleContext<NetQIRParser::TypeContext>(0);
}

NetQIRParser::ModifierContext* NetQIRParser::ReturnTypeContext::modifier() {
  return getRuleContext<NetQIRParser::ModifierContext>(0);
}


size_t NetQIRParser::ReturnTypeContext::getRuleIndex() const {
  return NetQIRParser::RuleReturnType;
}

void NetQIRParser::ReturnTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NetQIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnType(this);
}

void NetQIRParser::ReturnTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NetQIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnType(this);
}

NetQIRParser::ReturnTypeContext* NetQIRParser::returnType() {
  ReturnTypeContext *_localctx = _tracker.createInstance<ReturnTypeContext>(_ctx, getState());
  enterRule(_localctx, 42, NetQIRParser::RuleReturnType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(234);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case NetQIRParser::T__18:
      case NetQIRParser::T__19:
      case NetQIRParser::T__20:
      case NetQIRParser::T__21:
      case NetQIRParser::T__22:
      case NetQIRParser::T__23: {
        enterOuterAlt(_localctx, 1);
        setState(229);
        type();
        setState(231);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == NetQIRParser::T__25) {
          setState(230);
          modifier();
        }
        break;
      }

      case NetQIRParser::T__17: {
        enterOuterAlt(_localctx, 2);
        setState(233);
        match(NetQIRParser::T__17);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

NetQIRParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NetQIRParser::BaseTypeContext* NetQIRParser::TypeContext::baseType() {
  return getRuleContext<NetQIRParser::BaseTypeContext>(0);
}

std::vector<NetQIRParser::PointerContext *> NetQIRParser::TypeContext::pointer() {
  return getRuleContexts<NetQIRParser::PointerContext>();
}

NetQIRParser::PointerContext* NetQIRParser::TypeContext::pointer(size_t i) {
  return getRuleContext<NetQIRParser::PointerContext>(i);
}


size_t NetQIRParser::TypeContext::getRuleIndex() const {
  return NetQIRParser::RuleType;
}

void NetQIRParser::TypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NetQIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType(this);
}

void NetQIRParser::TypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NetQIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType(this);
}

NetQIRParser::TypeContext* NetQIRParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 44, NetQIRParser::RuleType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(236);
    baseType();
    setState(240);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == NetQIRParser::T__24) {
      setState(237);
      pointer();
      setState(242);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BaseTypeContext ------------------------------------------------------------------

NetQIRParser::BaseTypeContext::BaseTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t NetQIRParser::BaseTypeContext::getRuleIndex() const {
  return NetQIRParser::RuleBaseType;
}

void NetQIRParser::BaseTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NetQIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBaseType(this);
}

void NetQIRParser::BaseTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NetQIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBaseType(this);
}

NetQIRParser::BaseTypeContext* NetQIRParser::baseType() {
  BaseTypeContext *_localctx = _tracker.createInstance<BaseTypeContext>(_ctx, getState());
  enterRule(_localctx, 46, NetQIRParser::RuleBaseType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(243);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 33030144) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PointerContext ------------------------------------------------------------------

NetQIRParser::PointerContext::PointerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t NetQIRParser::PointerContext::getRuleIndex() const {
  return NetQIRParser::RulePointer;
}

void NetQIRParser::PointerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NetQIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPointer(this);
}

void NetQIRParser::PointerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NetQIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPointer(this);
}

NetQIRParser::PointerContext* NetQIRParser::pointer() {
  PointerContext *_localctx = _tracker.createInstance<PointerContext>(_ctx, getState());
  enterRule(_localctx, 48, NetQIRParser::RulePointer);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(245);
    match(NetQIRParser::T__24);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ModifierContext ------------------------------------------------------------------

NetQIRParser::ModifierContext::ModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t NetQIRParser::ModifierContext::getRuleIndex() const {
  return NetQIRParser::RuleModifier;
}

void NetQIRParser::ModifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NetQIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterModifier(this);
}

void NetQIRParser::ModifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NetQIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitModifier(this);
}

NetQIRParser::ModifierContext* NetQIRParser::modifier() {
  ModifierContext *_localctx = _tracker.createInstance<ModifierContext>(_ctx, getState());
  enterRule(_localctx, 50, NetQIRParser::RuleModifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(247);
    match(NetQIRParser::T__25);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ComparisonOpContext ------------------------------------------------------------------

NetQIRParser::ComparisonOpContext::ComparisonOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t NetQIRParser::ComparisonOpContext::getRuleIndex() const {
  return NetQIRParser::RuleComparisonOp;
}

void NetQIRParser::ComparisonOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NetQIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComparisonOp(this);
}

void NetQIRParser::ComparisonOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NetQIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComparisonOp(this);
}

NetQIRParser::ComparisonOpContext* NetQIRParser::comparisonOp() {
  ComparisonOpContext *_localctx = _tracker.createInstance<ComparisonOpContext>(_ctx, getState());
  enterRule(_localctx, 52, NetQIRParser::RuleComparisonOp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(249);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 137304735744) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributeBlockContext ------------------------------------------------------------------

NetQIRParser::AttributeBlockContext::AttributeBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> NetQIRParser::AttributeBlockContext::DIGIT() {
  return getTokens(NetQIRParser::DIGIT);
}

tree::TerminalNode* NetQIRParser::AttributeBlockContext::DIGIT(size_t i) {
  return getToken(NetQIRParser::DIGIT, i);
}


size_t NetQIRParser::AttributeBlockContext::getRuleIndex() const {
  return NetQIRParser::RuleAttributeBlock;
}

void NetQIRParser::AttributeBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NetQIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttributeBlock(this);
}

void NetQIRParser::AttributeBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NetQIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttributeBlock(this);
}

NetQIRParser::AttributeBlockContext* NetQIRParser::attributeBlock() {
  AttributeBlockContext *_localctx = _tracker.createInstance<AttributeBlockContext>(_ctx, getState());
  enterRule(_localctx, 54, NetQIRParser::RuleAttributeBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(251);
    match(NetQIRParser::T__36);
    setState(253); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(252);
      match(NetQIRParser::DIGIT);
      setState(255); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == NetQIRParser::DIGIT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void NetQIRParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  netqirParserInitialize();
#else
  ::antlr4::internal::call_once(netqirParserOnceFlag, netqirParserInitialize);
#endif
}
