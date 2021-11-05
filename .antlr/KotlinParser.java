// Generated from c:\Users\NEWSKY00\AppData\Local\Packages\CanonicalGroupLimited.Ubuntu18.04onWindows_79rhkp1fndgsc\LocalState\rootfs\home\saeha\work\Kotlin-Parser\Kotlin.g4 by ANTLR 4.8
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class KotlinParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.8", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, T__6=7, T__7=8, T__8=9, 
		T__9=10, T__10=11, T__11=12, T__12=13, T__13=14, T__14=15, T__15=16, T__16=17, 
		T__17=18, T__18=19, T__19=20, T__20=21, T__21=22, T__22=23, T__23=24, 
		T__24=25, T__25=26, T__26=27, T__27=28, T__28=29, T__29=30, T__30=31, 
		T__31=32, T__32=33, T__33=34, T__34=35, T__35=36, T__36=37, T__37=38, 
		T__38=39, T__39=40, T__40=41, T__41=42, T__42=43, T__43=44, T__44=45, 
		T__45=46, T__46=47, T__47=48, T__48=49, T__49=50, T__50=51, T__51=52, 
		T__52=53, T__53=54, T__54=55, T__55=56, T__56=57, T__57=58, T__58=59, 
		T__59=60, T__60=61, T__61=62, T__62=63, T__63=64, T__64=65, ID=66, NEXTLINE=67, 
		INT=68, REAL=69, STRING=70, WS=71, LINECOMMENT=72, COMMENTS=73;
	public static final int
		RULE_kotlin = 0, RULE_package = 1, RULE_importList = 2, RULE_imports = 3, 
		RULE_declaration = 4, RULE_functionObject = 5, RULE_functinParameters = 6, 
		RULE_functinParameter = 7, RULE_functionBody = 8, RULE_blockFunction = 9, 
		RULE_simpleFunction = 10, RULE_funcReturn = 11, RULE_classObject = 12, 
		RULE_classParameters = 13, RULE_classParameter = 14, RULE_inheritanceClass = 15, 
		RULE_classBody = 16, RULE_codes = 17, RULE_code = 18, RULE_variablesDeclare = 19, 
		RULE_assn = 20, RULE_substitutionOperator = 21, RULE_expression = 22, 
		RULE_ifExpr = 23, RULE_whenExpr = 24, RULE_whenbody = 25, RULE_literalConstant = 26, 
		RULE_expr = 27, RULE_orOper = 28, RULE_andOper = 29, RULE_compare = 30, 
		RULE_compareOperator = 31, RULE_infix = 32, RULE_listFunc = 33, RULE_filterBody = 34, 
		RULE_mapBody = 35, RULE_typeCheck = 36, RULE_typeCheckOperator = 37, RULE_inCheck = 38, 
		RULE_inCheckOperator = 39, RULE_list = 40, RULE_calcul = 41, RULE_prefix = 42, 
		RULE_prefixOperator = 43, RULE_postfix = 44, RULE_postfixOperator = 45, 
		RULE_loop = 46, RULE_forOper = 47, RULE_whileOper = 48, RULE_body = 49, 
		RULE_useFunc = 50, RULE_userFunc = 51, RULE_print = 52, RULE_printText = 53, 
		RULE_type = 54, RULE_nullableType = 55, RULE_userType = 56, RULE_obType = 57, 
		RULE_originalType = 58;
	private static String[] makeRuleNames() {
		return new String[] {
			"kotlin", "package", "importList", "imports", "declaration", "functionObject", 
			"functinParameters", "functinParameter", "functionBody", "blockFunction", 
			"simpleFunction", "funcReturn", "classObject", "classParameters", "classParameter", 
			"inheritanceClass", "classBody", "codes", "code", "variablesDeclare", 
			"assn", "substitutionOperator", "expression", "ifExpr", "whenExpr", "whenbody", 
			"literalConstant", "expr", "orOper", "andOper", "compare", "compareOperator", 
			"infix", "listFunc", "filterBody", "mapBody", "typeCheck", "typeCheckOperator", 
			"inCheck", "inCheckOperator", "list", "calcul", "prefix", "prefixOperator", 
			"postfix", "postfixOperator", "loop", "forOper", "whileOper", "body", 
			"useFunc", "userFunc", "print", "printText", "type", "nullableType", 
			"userType", "obType", "originalType"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'package'", "'.'", "'import'", "'*'", "'fun'", "':'", "'('", "','", 
			"')'", "'{'", "'}'", "'='", "'return'", "'class'", "'var'", "'val'", 
			"'()'", "'+='", "'-='", "'*='", "'/='", "'if'", "'else'", "'when'", "'->'", 
			"'\"'", "'null'", "'||'", "'&&'", "'!='", "'=='", "'<'", "'>'", "'<='", 
			"'>='", "'.filter'", "'.sortedBy'", "'.map'", "'.forEach'", "'it'", "'startWith'", 
			"'uppercase'", "'!'", "'is'", "'in'", "'..'", "'/'", "'+'", "'-'", "'++'", 
			"'--'", "'for ('", "'step'", "'downTo'", "'while ('", "'print'", "'println'", 
			"'?'", "'Int'", "'Unit'", "'Real'", "'String'", "'Array'", "'Double'", 
			"'Any'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, "ID", "NEXTLINE", "INT", "REAL", 
			"STRING", "WS", "LINECOMMENT", "COMMENTS"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "Kotlin.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public KotlinParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	public static class KotlinContext extends ParserRuleContext {
		public TerminalNode EOF() { return getToken(KotlinParser.EOF, 0); }
		public PackageContext package() {
			return getRuleContext(PackageContext.class,0);
		}
		public ImportListContext importList() {
			return getRuleContext(ImportListContext.class,0);
		}
		public List<DeclarationContext> declaration() {
			return getRuleContexts(DeclarationContext.class);
		}
		public DeclarationContext declaration(int i) {
			return getRuleContext(DeclarationContext.class,i);
		}
		public KotlinContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_kotlin; }
	}

	public final KotlinContext kotlin() throws RecognitionException {
		KotlinContext _localctx = new KotlinContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_kotlin);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(119);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__0) {
				{
				setState(118);
				package();
				}
			}

			setState(122);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,1,_ctx) ) {
			case 1:
				{
				setState(121);
				importList();
				}
				break;
			}
			setState(125); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(124);
				declaration();
				}
				}
				setState(127); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( _la==T__4 || _la==T__13 );
			setState(129);
			match(EOF);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class PackageContext extends ParserRuleContext {
		public List<TerminalNode> ID() { return getTokens(KotlinParser.ID); }
		public TerminalNode ID(int i) {
			return getToken(KotlinParser.ID, i);
		}
		public List<TerminalNode> NEXTLINE() { return getTokens(KotlinParser.NEXTLINE); }
		public TerminalNode NEXTLINE(int i) {
			return getToken(KotlinParser.NEXTLINE, i);
		}
		public PackageContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_package; }
	}

	public final PackageContext package() throws RecognitionException {
		PackageContext _localctx = new PackageContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_package);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(131);
			match(T__0);
			setState(132);
			match(ID);
			setState(137);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__1) {
				{
				{
				setState(133);
				match(T__1);
				setState(134);
				match(ID);
				}
				}
				setState(139);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(143);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==NEXTLINE) {
				{
				{
				setState(140);
				match(NEXTLINE);
				}
				}
				setState(145);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ImportListContext extends ParserRuleContext {
		public List<ImportsContext> imports() {
			return getRuleContexts(ImportsContext.class);
		}
		public ImportsContext imports(int i) {
			return getRuleContext(ImportsContext.class,i);
		}
		public ImportListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_importList; }
	}

	public final ImportListContext importList() throws RecognitionException {
		ImportListContext _localctx = new ImportListContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_importList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(149);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__2) {
				{
				{
				setState(146);
				imports();
				}
				}
				setState(151);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ImportsContext extends ParserRuleContext {
		public List<TerminalNode> ID() { return getTokens(KotlinParser.ID); }
		public TerminalNode ID(int i) {
			return getToken(KotlinParser.ID, i);
		}
		public List<TerminalNode> NEXTLINE() { return getTokens(KotlinParser.NEXTLINE); }
		public TerminalNode NEXTLINE(int i) {
			return getToken(KotlinParser.NEXTLINE, i);
		}
		public ImportsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_imports; }
	}

	public final ImportsContext imports() throws RecognitionException {
		ImportsContext _localctx = new ImportsContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_imports);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(152);
			match(T__2);
			setState(153);
			match(ID);
			setState(158);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__1) {
				{
				{
				setState(154);
				match(T__1);
				setState(155);
				_la = _input.LA(1);
				if ( !(_la==T__3 || _la==ID) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				}
				setState(160);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(164);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==NEXTLINE) {
				{
				{
				setState(161);
				match(NEXTLINE);
				}
				}
				setState(166);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class DeclarationContext extends ParserRuleContext {
		public FunctionObjectContext functionObject() {
			return getRuleContext(FunctionObjectContext.class,0);
		}
		public List<TerminalNode> NEXTLINE() { return getTokens(KotlinParser.NEXTLINE); }
		public TerminalNode NEXTLINE(int i) {
			return getToken(KotlinParser.NEXTLINE, i);
		}
		public ClassObjectContext classObject() {
			return getRuleContext(ClassObjectContext.class,0);
		}
		public DeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_declaration; }
	}

	public final DeclarationContext declaration() throws RecognitionException {
		DeclarationContext _localctx = new DeclarationContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_declaration);
		try {
			int _alt;
			setState(181);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__4:
				enterOuterAlt(_localctx, 1);
				{
				setState(167);
				functionObject();
				setState(171);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,8,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(168);
						match(NEXTLINE);
						}
						} 
					}
					setState(173);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,8,_ctx);
				}
				}
				break;
			case T__13:
				enterOuterAlt(_localctx, 2);
				{
				setState(174);
				classObject();
				setState(178);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,9,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(175);
						match(NEXTLINE);
						}
						} 
					}
					setState(180);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,9,_ctx);
				}
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class FunctionObjectContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(KotlinParser.ID, 0); }
		public FunctinParametersContext functinParameters() {
			return getRuleContext(FunctinParametersContext.class,0);
		}
		public FunctionBodyContext functionBody() {
			return getRuleContext(FunctionBodyContext.class,0);
		}
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public List<TerminalNode> NEXTLINE() { return getTokens(KotlinParser.NEXTLINE); }
		public TerminalNode NEXTLINE(int i) {
			return getToken(KotlinParser.NEXTLINE, i);
		}
		public FunctionObjectContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_functionObject; }
	}

	public final FunctionObjectContext functionObject() throws RecognitionException {
		FunctionObjectContext _localctx = new FunctionObjectContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_functionObject);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(183);
			match(T__4);
			setState(184);
			match(ID);
			setState(185);
			functinParameters();
			setState(188);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__5) {
				{
				setState(186);
				match(T__5);
				setState(187);
				type();
				}
			}

			setState(190);
			functionBody();
			setState(194);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,12,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(191);
					match(NEXTLINE);
					}
					} 
				}
				setState(196);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,12,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class FunctinParametersContext extends ParserRuleContext {
		public List<FunctinParameterContext> functinParameter() {
			return getRuleContexts(FunctinParameterContext.class);
		}
		public FunctinParameterContext functinParameter(int i) {
			return getRuleContext(FunctinParameterContext.class,i);
		}
		public FunctinParametersContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_functinParameters; }
	}

	public final FunctinParametersContext functinParameters() throws RecognitionException {
		FunctinParametersContext _localctx = new FunctinParametersContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_functinParameters);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(197);
			match(T__6);
			setState(206);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==ID) {
				{
				setState(198);
				functinParameter();
				setState(203);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==T__7) {
					{
					{
					setState(199);
					match(T__7);
					setState(200);
					functinParameter();
					}
					}
					setState(205);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			setState(208);
			match(T__8);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class FunctinParameterContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(KotlinParser.ID, 0); }
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public FunctinParameterContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_functinParameter; }
	}

	public final FunctinParameterContext functinParameter() throws RecognitionException {
		FunctinParameterContext _localctx = new FunctinParameterContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_functinParameter);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(210);
			match(ID);
			setState(211);
			match(T__5);
			setState(212);
			type();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class FunctionBodyContext extends ParserRuleContext {
		public BlockFunctionContext blockFunction() {
			return getRuleContext(BlockFunctionContext.class,0);
		}
		public SimpleFunctionContext simpleFunction() {
			return getRuleContext(SimpleFunctionContext.class,0);
		}
		public FunctionBodyContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_functionBody; }
	}

	public final FunctionBodyContext functionBody() throws RecognitionException {
		FunctionBodyContext _localctx = new FunctionBodyContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_functionBody);
		try {
			setState(216);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__9:
				enterOuterAlt(_localctx, 1);
				{
				setState(214);
				blockFunction();
				}
				break;
			case T__11:
				enterOuterAlt(_localctx, 2);
				{
				setState(215);
				simpleFunction();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class BlockFunctionContext extends ParserRuleContext {
		public CodesContext codes() {
			return getRuleContext(CodesContext.class,0);
		}
		public BlockFunctionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_blockFunction; }
	}

	public final BlockFunctionContext blockFunction() throws RecognitionException {
		BlockFunctionContext _localctx = new BlockFunctionContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_blockFunction);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(218);
			match(T__9);
			setState(219);
			codes();
			setState(220);
			match(T__10);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class SimpleFunctionContext extends ParserRuleContext {
		public CodeContext code() {
			return getRuleContext(CodeContext.class,0);
		}
		public SimpleFunctionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_simpleFunction; }
	}

	public final SimpleFunctionContext simpleFunction() throws RecognitionException {
		SimpleFunctionContext _localctx = new SimpleFunctionContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_simpleFunction);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(222);
			match(T__11);
			setState(223);
			code();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class FuncReturnContext extends ParserRuleContext {
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public List<TerminalNode> NEXTLINE() { return getTokens(KotlinParser.NEXTLINE); }
		public TerminalNode NEXTLINE(int i) {
			return getToken(KotlinParser.NEXTLINE, i);
		}
		public FuncReturnContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_funcReturn; }
	}

	public final FuncReturnContext funcReturn() throws RecognitionException {
		FuncReturnContext _localctx = new FuncReturnContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_funcReturn);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(225);
			match(T__12);
			setState(226);
			expr();
			setState(230);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,16,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(227);
					match(NEXTLINE);
					}
					} 
				}
				setState(232);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,16,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ClassObjectContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(KotlinParser.ID, 0); }
		public ClassParametersContext classParameters() {
			return getRuleContext(ClassParametersContext.class,0);
		}
		public ClassBodyContext classBody() {
			return getRuleContext(ClassBodyContext.class,0);
		}
		public InheritanceClassContext inheritanceClass() {
			return getRuleContext(InheritanceClassContext.class,0);
		}
		public List<TerminalNode> NEXTLINE() { return getTokens(KotlinParser.NEXTLINE); }
		public TerminalNode NEXTLINE(int i) {
			return getToken(KotlinParser.NEXTLINE, i);
		}
		public ClassObjectContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_classObject; }
	}

	public final ClassObjectContext classObject() throws RecognitionException {
		ClassObjectContext _localctx = new ClassObjectContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_classObject);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(233);
			match(T__13);
			setState(234);
			match(ID);
			setState(235);
			classParameters();
			setState(238);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__5) {
				{
				setState(236);
				match(T__5);
				setState(237);
				inheritanceClass();
				}
			}

			setState(240);
			classBody();
			setState(244);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,18,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(241);
					match(NEXTLINE);
					}
					} 
				}
				setState(246);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,18,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ClassParametersContext extends ParserRuleContext {
		public List<ClassParameterContext> classParameter() {
			return getRuleContexts(ClassParameterContext.class);
		}
		public ClassParameterContext classParameter(int i) {
			return getRuleContext(ClassParameterContext.class,i);
		}
		public ClassParametersContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_classParameters; }
	}

	public final ClassParametersContext classParameters() throws RecognitionException {
		ClassParametersContext _localctx = new ClassParametersContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_classParameters);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(247);
			match(T__6);
			setState(256);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__14 || _la==T__15) {
				{
				setState(248);
				classParameter();
				setState(253);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==T__7) {
					{
					{
					setState(249);
					match(T__7);
					setState(250);
					classParameter();
					}
					}
					setState(255);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			setState(258);
			match(T__8);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ClassParameterContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(KotlinParser.ID, 0); }
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public ClassParameterContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_classParameter; }
	}

	public final ClassParameterContext classParameter() throws RecognitionException {
		ClassParameterContext _localctx = new ClassParameterContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_classParameter);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(260);
			_la = _input.LA(1);
			if ( !(_la==T__14 || _la==T__15) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(261);
			match(ID);
			setState(262);
			match(T__5);
			setState(263);
			type();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class InheritanceClassContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(KotlinParser.ID, 0); }
		public InheritanceClassContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_inheritanceClass; }
	}

	public final InheritanceClassContext inheritanceClass() throws RecognitionException {
		InheritanceClassContext _localctx = new InheritanceClassContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_inheritanceClass);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(265);
			match(ID);
			setState(266);
			match(T__16);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ClassBodyContext extends ParserRuleContext {
		public CodesContext codes() {
			return getRuleContext(CodesContext.class,0);
		}
		public ClassBodyContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_classBody; }
	}

	public final ClassBodyContext classBody() throws RecognitionException {
		ClassBodyContext _localctx = new ClassBodyContext(_ctx, getState());
		enterRule(_localctx, 32, RULE_classBody);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(268);
			match(T__9);
			setState(269);
			codes();
			setState(270);
			match(T__10);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class CodesContext extends ParserRuleContext {
		public List<CodeContext> code() {
			return getRuleContexts(CodeContext.class);
		}
		public CodeContext code(int i) {
			return getRuleContext(CodeContext.class,i);
		}
		public List<TerminalNode> NEXTLINE() { return getTokens(KotlinParser.NEXTLINE); }
		public TerminalNode NEXTLINE(int i) {
			return getToken(KotlinParser.NEXTLINE, i);
		}
		public CodesContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_codes; }
	}

	public final CodesContext codes() throws RecognitionException {
		CodesContext _localctx = new CodesContext(_ctx, getState());
		enterRule(_localctx, 34, RULE_codes);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(280);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,22,_ctx) ) {
			case 1:
				{
				setState(272);
				code();
				setState(277);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,21,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(273);
						match(NEXTLINE);
						setState(274);
						code();
						}
						} 
					}
					setState(279);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,21,_ctx);
				}
				}
				break;
			}
			setState(283);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==NEXTLINE) {
				{
				setState(282);
				match(NEXTLINE);
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class CodeContext extends ParserRuleContext {
		public LoopContext loop() {
			return getRuleContext(LoopContext.class,0);
		}
		public VariablesDeclareContext variablesDeclare() {
			return getRuleContext(VariablesDeclareContext.class,0);
		}
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public DeclarationContext declaration() {
			return getRuleContext(DeclarationContext.class,0);
		}
		public UseFuncContext useFunc() {
			return getRuleContext(UseFuncContext.class,0);
		}
		public CodeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_code; }
	}

	public final CodeContext code() throws RecognitionException {
		CodeContext _localctx = new CodeContext(_ctx, getState());
		enterRule(_localctx, 36, RULE_code);
		try {
			setState(291);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,24,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(285);
				loop();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(286);
				variablesDeclare();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(287);
				expression();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(288);
				expr();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(289);
				declaration();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(290);
				useFunc();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class VariablesDeclareContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(KotlinParser.ID, 0); }
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public AssnContext assn() {
			return getRuleContext(AssnContext.class,0);
		}
		public VariablesDeclareContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_variablesDeclare; }
	}

	public final VariablesDeclareContext variablesDeclare() throws RecognitionException {
		VariablesDeclareContext _localctx = new VariablesDeclareContext(_ctx, getState());
		enterRule(_localctx, 38, RULE_variablesDeclare);
		int _la;
		try {
			setState(304);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__14:
			case T__15:
				enterOuterAlt(_localctx, 1);
				{
				setState(293);
				_la = _input.LA(1);
				if ( !(_la==T__14 || _la==T__15) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(294);
				match(ID);
				setState(297);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__5) {
					{
					setState(295);
					match(T__5);
					setState(296);
					type();
					}
				}

				setState(300);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__11) | (1L << T__17) | (1L << T__18) | (1L << T__19) | (1L << T__20))) != 0)) {
					{
					setState(299);
					assn();
					}
				}

				}
				break;
			case ID:
				enterOuterAlt(_localctx, 2);
				{
				setState(302);
				match(ID);
				setState(303);
				assn();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class AssnContext extends ParserRuleContext {
		public SubstitutionOperatorContext substitutionOperator() {
			return getRuleContext(SubstitutionOperatorContext.class,0);
		}
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public TerminalNode ID() { return getToken(KotlinParser.ID, 0); }
		public AssnContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_assn; }
	}

	public final AssnContext assn() throws RecognitionException {
		AssnContext _localctx = new AssnContext(_ctx, getState());
		enterRule(_localctx, 40, RULE_assn);
		int _la;
		try {
			setState(323);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,30,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(306);
				substitutionOperator();
				setState(307);
				expr();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(309);
				match(T__11);
				setState(310);
				match(ID);
				setState(311);
				match(T__6);
				setState(320);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,29,_ctx) ) {
				case 1:
					{
					setState(312);
					expr();
					setState(317);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==T__7) {
						{
						{
						setState(313);
						match(T__7);
						setState(314);
						expr();
						}
						}
						setState(319);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					}
					break;
				}
				setState(322);
				match(T__8);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class SubstitutionOperatorContext extends ParserRuleContext {
		public SubstitutionOperatorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_substitutionOperator; }
	}

	public final SubstitutionOperatorContext substitutionOperator() throws RecognitionException {
		SubstitutionOperatorContext _localctx = new SubstitutionOperatorContext(_ctx, getState());
		enterRule(_localctx, 42, RULE_substitutionOperator);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(325);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__11) | (1L << T__17) | (1L << T__18) | (1L << T__19) | (1L << T__20))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ExpressionContext extends ParserRuleContext {
		public IfExprContext ifExpr() {
			return getRuleContext(IfExprContext.class,0);
		}
		public WhenExprContext whenExpr() {
			return getRuleContext(WhenExprContext.class,0);
		}
		public LiteralConstantContext literalConstant() {
			return getRuleContext(LiteralConstantContext.class,0);
		}
		public TerminalNode ID() { return getToken(KotlinParser.ID, 0); }
		public UserFuncContext userFunc() {
			return getRuleContext(UserFuncContext.class,0);
		}
		public FuncReturnContext funcReturn() {
			return getRuleContext(FuncReturnContext.class,0);
		}
		public ExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expression; }
	}

	public final ExpressionContext expression() throws RecognitionException {
		ExpressionContext _localctx = new ExpressionContext(_ctx, getState());
		enterRule(_localctx, 44, RULE_expression);
		int _la;
		try {
			setState(335);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,32,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(327);
				ifExpr();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(328);
				whenExpr();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(329);
				literalConstant();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(330);
				match(ID);
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(331);
				userFunc();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(333);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__12) {
					{
					setState(332);
					funcReturn();
					}
				}

				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class IfExprContext extends ParserRuleContext {
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public List<BodyContext> body() {
			return getRuleContexts(BodyContext.class);
		}
		public BodyContext body(int i) {
			return getRuleContext(BodyContext.class,i);
		}
		public List<TerminalNode> NEXTLINE() { return getTokens(KotlinParser.NEXTLINE); }
		public TerminalNode NEXTLINE(int i) {
			return getToken(KotlinParser.NEXTLINE, i);
		}
		public IfExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ifExpr; }
	}

	public final IfExprContext ifExpr() throws RecognitionException {
		IfExprContext _localctx = new IfExprContext(_ctx, getState());
		enterRule(_localctx, 46, RULE_ifExpr);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(337);
			match(T__21);
			setState(338);
			match(T__6);
			setState(339);
			expr();
			setState(340);
			match(T__8);
			setState(341);
			body();
			setState(345);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,33,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(342);
					match(NEXTLINE);
					}
					} 
				}
				setState(347);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,33,_ctx);
			}
			setState(350);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,34,_ctx) ) {
			case 1:
				{
				setState(348);
				match(T__22);
				setState(349);
				body();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class WhenExprContext extends ParserRuleContext {
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public WhenbodyContext whenbody() {
			return getRuleContext(WhenbodyContext.class,0);
		}
		public WhenExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_whenExpr; }
	}

	public final WhenExprContext whenExpr() throws RecognitionException {
		WhenExprContext _localctx = new WhenExprContext(_ctx, getState());
		enterRule(_localctx, 48, RULE_whenExpr);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(352);
			match(T__23);
			setState(353);
			match(T__6);
			setState(354);
			expr();
			setState(355);
			match(T__8);
			setState(356);
			whenbody();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class WhenbodyContext extends ParserRuleContext {
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public List<CodesContext> codes() {
			return getRuleContexts(CodesContext.class);
		}
		public CodesContext codes(int i) {
			return getRuleContext(CodesContext.class,i);
		}
		public List<CodeContext> code() {
			return getRuleContexts(CodeContext.class);
		}
		public CodeContext code(int i) {
			return getRuleContext(CodeContext.class,i);
		}
		public List<TerminalNode> NEXTLINE() { return getTokens(KotlinParser.NEXTLINE); }
		public TerminalNode NEXTLINE(int i) {
			return getToken(KotlinParser.NEXTLINE, i);
		}
		public WhenbodyContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_whenbody; }
	}

	public final WhenbodyContext whenbody() throws RecognitionException {
		WhenbodyContext _localctx = new WhenbodyContext(_ctx, getState());
		enterRule(_localctx, 50, RULE_whenbody);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(358);
			match(T__9);
			setState(359);
			expr();
			setState(360);
			match(T__24);
			setState(366);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__9:
				{
				setState(361);
				match(T__9);
				setState(362);
				codes();
				setState(363);
				match(T__10);
				}
				break;
			case T__1:
			case T__3:
			case T__4:
			case T__6:
			case T__10:
			case T__12:
			case T__13:
			case T__14:
			case T__15:
			case T__21:
			case T__23:
			case T__25:
			case T__26:
			case T__27:
			case T__28:
			case T__29:
			case T__30:
			case T__31:
			case T__32:
			case T__33:
			case T__34:
			case T__42:
			case T__43:
			case T__44:
			case T__45:
			case T__46:
			case T__47:
			case T__48:
			case T__49:
			case T__50:
			case T__51:
			case T__54:
			case T__55:
			case T__56:
			case ID:
			case NEXTLINE:
			case INT:
			case REAL:
				{
				setState(365);
				code();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			setState(380);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==NEXTLINE) {
				{
				{
				setState(368);
				match(NEXTLINE);
				setState(369);
				expr();
				setState(370);
				match(T__24);
				setState(376);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case T__9:
					{
					setState(371);
					match(T__9);
					setState(372);
					codes();
					setState(373);
					match(T__10);
					}
					break;
				case T__1:
				case T__3:
				case T__4:
				case T__6:
				case T__10:
				case T__12:
				case T__13:
				case T__14:
				case T__15:
				case T__21:
				case T__23:
				case T__25:
				case T__26:
				case T__27:
				case T__28:
				case T__29:
				case T__30:
				case T__31:
				case T__32:
				case T__33:
				case T__34:
				case T__42:
				case T__43:
				case T__44:
				case T__45:
				case T__46:
				case T__47:
				case T__48:
				case T__49:
				case T__50:
				case T__51:
				case T__54:
				case T__55:
				case T__56:
				case ID:
				case NEXTLINE:
				case INT:
				case REAL:
					{
					setState(375);
					code();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				}
				}
				setState(382);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(383);
			match(T__10);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class LiteralConstantContext extends ParserRuleContext {
		public TerminalNode INT() { return getToken(KotlinParser.INT, 0); }
		public TerminalNode REAL() { return getToken(KotlinParser.REAL, 0); }
		public LiteralConstantContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_literalConstant; }
	}

	public final LiteralConstantContext literalConstant() throws RecognitionException {
		LiteralConstantContext _localctx = new LiteralConstantContext(_ctx, getState());
		enterRule(_localctx, 52, RULE_literalConstant);
		int _la;
		try {
			setState(395);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case INT:
				enterOuterAlt(_localctx, 1);
				{
				setState(385);
				match(INT);
				}
				break;
			case REAL:
				enterOuterAlt(_localctx, 2);
				{
				setState(386);
				match(REAL);
				}
				break;
			case T__25:
				enterOuterAlt(_localctx, 3);
				{
				setState(387);
				match(T__25);
				setState(389); 
				_errHandler.sync(this);
				_la = _input.LA(1);
				do {
					{
					{
					setState(388);
					_la = _input.LA(1);
					if ( _la <= 0 || (_la==T__25) ) {
					_errHandler.recoverInline(this);
					}
					else {
						if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
						_errHandler.reportMatch(this);
						consume();
					}
					}
					}
					setState(391); 
					_errHandler.sync(this);
					_la = _input.LA(1);
				} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__0) | (1L << T__1) | (1L << T__2) | (1L << T__3) | (1L << T__4) | (1L << T__5) | (1L << T__6) | (1L << T__7) | (1L << T__8) | (1L << T__9) | (1L << T__10) | (1L << T__11) | (1L << T__12) | (1L << T__13) | (1L << T__14) | (1L << T__15) | (1L << T__16) | (1L << T__17) | (1L << T__18) | (1L << T__19) | (1L << T__20) | (1L << T__21) | (1L << T__22) | (1L << T__23) | (1L << T__24) | (1L << T__26) | (1L << T__27) | (1L << T__28) | (1L << T__29) | (1L << T__30) | (1L << T__31) | (1L << T__32) | (1L << T__33) | (1L << T__34) | (1L << T__35) | (1L << T__36) | (1L << T__37) | (1L << T__38) | (1L << T__39) | (1L << T__40) | (1L << T__41) | (1L << T__42) | (1L << T__43) | (1L << T__44) | (1L << T__45) | (1L << T__46) | (1L << T__47) | (1L << T__48) | (1L << T__49) | (1L << T__50) | (1L << T__51) | (1L << T__52) | (1L << T__53) | (1L << T__54) | (1L << T__55) | (1L << T__56) | (1L << T__57) | (1L << T__58) | (1L << T__59) | (1L << T__60) | (1L << T__61) | (1L << T__62))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (T__63 - 64)) | (1L << (T__64 - 64)) | (1L << (ID - 64)) | (1L << (NEXTLINE - 64)) | (1L << (INT - 64)) | (1L << (REAL - 64)) | (1L << (STRING - 64)) | (1L << (WS - 64)) | (1L << (LINECOMMENT - 64)) | (1L << (COMMENTS - 64)))) != 0) );
				setState(393);
				match(T__25);
				}
				break;
			case T__26:
				enterOuterAlt(_localctx, 4);
				{
				setState(394);
				match(T__26);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ExprContext extends ParserRuleContext {
		public OrOperContext orOper() {
			return getRuleContext(OrOperContext.class,0);
		}
		public ExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expr; }
	}

	public final ExprContext expr() throws RecognitionException {
		ExprContext _localctx = new ExprContext(_ctx, getState());
		enterRule(_localctx, 54, RULE_expr);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(397);
			orOper();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class OrOperContext extends ParserRuleContext {
		public List<AndOperContext> andOper() {
			return getRuleContexts(AndOperContext.class);
		}
		public AndOperContext andOper(int i) {
			return getRuleContext(AndOperContext.class,i);
		}
		public OrOperContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_orOper; }
	}

	public final OrOperContext orOper() throws RecognitionException {
		OrOperContext _localctx = new OrOperContext(_ctx, getState());
		enterRule(_localctx, 56, RULE_orOper);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(399);
			andOper();
			setState(404);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,40,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(400);
					match(T__27);
					setState(401);
					andOper();
					}
					} 
				}
				setState(406);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,40,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class AndOperContext extends ParserRuleContext {
		public List<CompareContext> compare() {
			return getRuleContexts(CompareContext.class);
		}
		public CompareContext compare(int i) {
			return getRuleContext(CompareContext.class,i);
		}
		public AndOperContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_andOper; }
	}

	public final AndOperContext andOper() throws RecognitionException {
		AndOperContext _localctx = new AndOperContext(_ctx, getState());
		enterRule(_localctx, 58, RULE_andOper);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(407);
			compare();
			setState(412);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,41,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(408);
					match(T__28);
					setState(409);
					compare();
					}
					} 
				}
				setState(414);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,41,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class CompareContext extends ParserRuleContext {
		public List<InfixContext> infix() {
			return getRuleContexts(InfixContext.class);
		}
		public InfixContext infix(int i) {
			return getRuleContext(InfixContext.class,i);
		}
		public List<CompareOperatorContext> compareOperator() {
			return getRuleContexts(CompareOperatorContext.class);
		}
		public CompareOperatorContext compareOperator(int i) {
			return getRuleContext(CompareOperatorContext.class,i);
		}
		public CompareContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_compare; }
	}

	public final CompareContext compare() throws RecognitionException {
		CompareContext _localctx = new CompareContext(_ctx, getState());
		enterRule(_localctx, 60, RULE_compare);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(415);
			infix();
			setState(421);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,42,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(416);
					compareOperator();
					setState(417);
					infix();
					}
					} 
				}
				setState(423);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,42,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class CompareOperatorContext extends ParserRuleContext {
		public CompareOperatorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_compareOperator; }
	}

	public final CompareOperatorContext compareOperator() throws RecognitionException {
		CompareOperatorContext _localctx = new CompareOperatorContext(_ctx, getState());
		enterRule(_localctx, 62, RULE_compareOperator);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(424);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__29) | (1L << T__30) | (1L << T__31) | (1L << T__32) | (1L << T__33) | (1L << T__34))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class InfixContext extends ParserRuleContext {
		public ListContext list() {
			return getRuleContext(ListContext.class,0);
		}
		public List<InCheckContext> inCheck() {
			return getRuleContexts(InCheckContext.class);
		}
		public InCheckContext inCheck(int i) {
			return getRuleContext(InCheckContext.class,i);
		}
		public List<TypeCheckContext> typeCheck() {
			return getRuleContexts(TypeCheckContext.class);
		}
		public TypeCheckContext typeCheck(int i) {
			return getRuleContext(TypeCheckContext.class,i);
		}
		public List<ListFuncContext> listFunc() {
			return getRuleContexts(ListFuncContext.class);
		}
		public ListFuncContext listFunc(int i) {
			return getRuleContext(ListFuncContext.class,i);
		}
		public InfixContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_infix; }
	}

	public final InfixContext infix() throws RecognitionException {
		InfixContext _localctx = new InfixContext(_ctx, getState());
		enterRule(_localctx, 64, RULE_infix);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(426);
			list();
			setState(433);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,44,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					setState(431);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,43,_ctx) ) {
					case 1:
						{
						{
						setState(427);
						match(T__1);
						setState(428);
						listFunc();
						}
						}
						break;
					case 2:
						{
						setState(429);
						inCheck();
						}
						break;
					case 3:
						{
						setState(430);
						typeCheck();
						}
						break;
					}
					} 
				}
				setState(435);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,44,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ListFuncContext extends ParserRuleContext {
		public FilterBodyContext filterBody() {
			return getRuleContext(FilterBodyContext.class,0);
		}
		public TerminalNode ID() { return getToken(KotlinParser.ID, 0); }
		public MapBodyContext mapBody() {
			return getRuleContext(MapBodyContext.class,0);
		}
		public CodesContext codes() {
			return getRuleContext(CodesContext.class,0);
		}
		public ListFuncContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_listFunc; }
	}

	public final ListFuncContext listFunc() throws RecognitionException {
		ListFuncContext _localctx = new ListFuncContext(_ctx, getState());
		enterRule(_localctx, 66, RULE_listFunc);
		try {
			setState(452);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__35:
				enterOuterAlt(_localctx, 1);
				{
				setState(436);
				match(T__35);
				setState(437);
				match(T__9);
				setState(438);
				filterBody();
				setState(439);
				match(T__10);
				}
				break;
			case T__36:
				enterOuterAlt(_localctx, 2);
				{
				setState(441);
				match(T__36);
				setState(442);
				match(T__9);
				setState(443);
				match(ID);
				setState(444);
				match(T__10);
				}
				break;
			case T__37:
				enterOuterAlt(_localctx, 3);
				{
				setState(445);
				match(T__37);
				setState(446);
				mapBody();
				}
				break;
			case T__38:
				enterOuterAlt(_localctx, 4);
				{
				setState(447);
				match(T__38);
				setState(448);
				match(T__9);
				setState(449);
				codes();
				setState(450);
				match(T__10);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class FilterBodyContext extends ParserRuleContext {
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public FilterBodyContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_filterBody; }
	}

	public final FilterBodyContext filterBody() throws RecognitionException {
		FilterBodyContext _localctx = new FilterBodyContext(_ctx, getState());
		enterRule(_localctx, 68, RULE_filterBody);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(454);
			match(T__39);
			setState(455);
			match(T__1);
			setState(456);
			match(T__40);
			setState(457);
			match(T__6);
			setState(458);
			expr();
			setState(459);
			match(T__8);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class MapBodyContext extends ParserRuleContext {
		public MapBodyContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_mapBody; }
	}

	public final MapBodyContext mapBody() throws RecognitionException {
		MapBodyContext _localctx = new MapBodyContext(_ctx, getState());
		enterRule(_localctx, 70, RULE_mapBody);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(461);
			match(T__39);
			setState(462);
			match(T__1);
			setState(463);
			match(T__41);
			setState(464);
			match(T__6);
			setState(465);
			match(T__8);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TypeCheckContext extends ParserRuleContext {
		public TypeCheckOperatorContext typeCheckOperator() {
			return getRuleContext(TypeCheckOperatorContext.class,0);
		}
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public TypeCheckContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typeCheck; }
	}

	public final TypeCheckContext typeCheck() throws RecognitionException {
		TypeCheckContext _localctx = new TypeCheckContext(_ctx, getState());
		enterRule(_localctx, 72, RULE_typeCheck);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(467);
			typeCheckOperator();
			setState(468);
			type();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TypeCheckOperatorContext extends ParserRuleContext {
		public TypeCheckOperatorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typeCheckOperator; }
	}

	public final TypeCheckOperatorContext typeCheckOperator() throws RecognitionException {
		TypeCheckOperatorContext _localctx = new TypeCheckOperatorContext(_ctx, getState());
		enterRule(_localctx, 74, RULE_typeCheckOperator);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(471);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__42) {
				{
				setState(470);
				match(T__42);
				}
			}

			setState(473);
			match(T__43);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class InCheckContext extends ParserRuleContext {
		public InCheckOperatorContext inCheckOperator() {
			return getRuleContext(InCheckOperatorContext.class,0);
		}
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public InCheckContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_inCheck; }
	}

	public final InCheckContext inCheck() throws RecognitionException {
		InCheckContext _localctx = new InCheckContext(_ctx, getState());
		enterRule(_localctx, 76, RULE_inCheck);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(475);
			inCheckOperator();
			setState(476);
			expr();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class InCheckOperatorContext extends ParserRuleContext {
		public InCheckOperatorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_inCheckOperator; }
	}

	public final InCheckOperatorContext inCheckOperator() throws RecognitionException {
		InCheckOperatorContext _localctx = new InCheckOperatorContext(_ctx, getState());
		enterRule(_localctx, 78, RULE_inCheckOperator);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(479);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__42) {
				{
				setState(478);
				match(T__42);
				}
			}

			setState(481);
			match(T__44);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ListContext extends ParserRuleContext {
		public List<CalculContext> calcul() {
			return getRuleContexts(CalculContext.class);
		}
		public CalculContext calcul(int i) {
			return getRuleContext(CalculContext.class,i);
		}
		public ListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_list; }
	}

	public final ListContext list() throws RecognitionException {
		ListContext _localctx = new ListContext(_ctx, getState());
		enterRule(_localctx, 80, RULE_list);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(483);
			calcul();
			setState(488);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,48,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(484);
					match(T__45);
					setState(485);
					calcul();
					}
					} 
				}
				setState(490);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,48,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class CalculContext extends ParserRuleContext {
		public List<PrefixContext> prefix() {
			return getRuleContexts(PrefixContext.class);
		}
		public PrefixContext prefix(int i) {
			return getRuleContext(PrefixContext.class,i);
		}
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public CalculContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_calcul; }
	}

	public final CalculContext calcul() throws RecognitionException {
		CalculContext _localctx = new CalculContext(_ctx, getState());
		enterRule(_localctx, 82, RULE_calcul);
		int _la;
		try {
			int _alt;
			setState(519);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,53,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(491);
				prefix();
				setState(496);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,49,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(492);
						_la = _input.LA(1);
						if ( !(_la==T__3 || _la==T__46) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(493);
						prefix();
						}
						} 
					}
					setState(498);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,49,_ctx);
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(499);
				prefix();
				setState(504);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,50,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(500);
						_la = _input.LA(1);
						if ( !(_la==T__47 || _la==T__48) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(501);
						prefix();
						}
						} 
					}
					setState(506);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,50,_ctx);
				}
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(507);
				match(T__6);
				setState(508);
				expr();
				setState(509);
				match(T__8);
				setState(516);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,52,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						setState(514);
						_errHandler.sync(this);
						switch (_input.LA(1)) {
						case T__3:
						case T__46:
							{
							{
							setState(510);
							_la = _input.LA(1);
							if ( !(_la==T__3 || _la==T__46) ) {
							_errHandler.recoverInline(this);
							}
							else {
								if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
								_errHandler.reportMatch(this);
								consume();
							}
							setState(511);
							prefix();
							}
							}
							break;
						case T__47:
						case T__48:
							{
							{
							setState(512);
							_la = _input.LA(1);
							if ( !(_la==T__47 || _la==T__48) ) {
							_errHandler.recoverInline(this);
							}
							else {
								if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
								_errHandler.reportMatch(this);
								consume();
							}
							setState(513);
							prefix();
							}
							}
							break;
						default:
							throw new NoViableAltException(this);
						}
						} 
					}
					setState(518);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,52,_ctx);
				}
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class PrefixContext extends ParserRuleContext {
		public PostfixContext postfix() {
			return getRuleContext(PostfixContext.class,0);
		}
		public List<PrefixOperatorContext> prefixOperator() {
			return getRuleContexts(PrefixOperatorContext.class);
		}
		public PrefixOperatorContext prefixOperator(int i) {
			return getRuleContext(PrefixOperatorContext.class,i);
		}
		public PrefixContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_prefix; }
	}

	public final PrefixContext prefix() throws RecognitionException {
		PrefixContext _localctx = new PrefixContext(_ctx, getState());
		enterRule(_localctx, 84, RULE_prefix);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(524);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,54,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(521);
					prefixOperator();
					}
					} 
				}
				setState(526);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,54,_ctx);
			}
			setState(527);
			postfix();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class PrefixOperatorContext extends ParserRuleContext {
		public PrefixOperatorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_prefixOperator; }
	}

	public final PrefixOperatorContext prefixOperator() throws RecognitionException {
		PrefixOperatorContext _localctx = new PrefixOperatorContext(_ctx, getState());
		enterRule(_localctx, 86, RULE_prefixOperator);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(529);
			_la = _input.LA(1);
			if ( !(_la==T__49 || _la==T__50) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class PostfixContext extends ParserRuleContext {
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public List<PostfixOperatorContext> postfixOperator() {
			return getRuleContexts(PostfixOperatorContext.class);
		}
		public PostfixOperatorContext postfixOperator(int i) {
			return getRuleContext(PostfixOperatorContext.class,i);
		}
		public PostfixContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_postfix; }
	}

	public final PostfixContext postfix() throws RecognitionException {
		PostfixContext _localctx = new PostfixContext(_ctx, getState());
		enterRule(_localctx, 88, RULE_postfix);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(531);
			expression();
			setState(535);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,55,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(532);
					postfixOperator();
					}
					} 
				}
				setState(537);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,55,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class PostfixOperatorContext extends ParserRuleContext {
		public PrefixOperatorContext prefixOperator() {
			return getRuleContext(PrefixOperatorContext.class,0);
		}
		public TerminalNode ID() { return getToken(KotlinParser.ID, 0); }
		public PostfixOperatorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_postfixOperator; }
	}

	public final PostfixOperatorContext postfixOperator() throws RecognitionException {
		PostfixOperatorContext _localctx = new PostfixOperatorContext(_ctx, getState());
		enterRule(_localctx, 90, RULE_postfixOperator);
		int _la;
		try {
			setState(544);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__49:
			case T__50:
				enterOuterAlt(_localctx, 1);
				{
				setState(538);
				prefixOperator();
				}
				break;
			case T__1:
				enterOuterAlt(_localctx, 2);
				{
				setState(539);
				match(T__1);
				setState(540);
				match(ID);
				setState(542);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__16) {
					{
					setState(541);
					match(T__16);
					}
				}

				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class LoopContext extends ParserRuleContext {
		public ForOperContext forOper() {
			return getRuleContext(ForOperContext.class,0);
		}
		public WhileOperContext whileOper() {
			return getRuleContext(WhileOperContext.class,0);
		}
		public LoopContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_loop; }
	}

	public final LoopContext loop() throws RecognitionException {
		LoopContext _localctx = new LoopContext(_ctx, getState());
		enterRule(_localctx, 92, RULE_loop);
		try {
			setState(548);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__51:
				enterOuterAlt(_localctx, 1);
				{
				setState(546);
				forOper();
				}
				break;
			case T__54:
				enterOuterAlt(_localctx, 2);
				{
				setState(547);
				whileOper();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ForOperContext extends ParserRuleContext {
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public BodyContext body() {
			return getRuleContext(BodyContext.class,0);
		}
		public ForOperContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_forOper; }
	}

	public final ForOperContext forOper() throws RecognitionException {
		ForOperContext _localctx = new ForOperContext(_ctx, getState());
		enterRule(_localctx, 94, RULE_forOper);
		try {
			setState(571);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,59,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(550);
				match(T__51);
				setState(551);
				expr();
				setState(552);
				match(T__8);
				setState(553);
				body();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(555);
				match(T__51);
				setState(556);
				expr();
				setState(557);
				match(T__52);
				setState(558);
				expr();
				setState(559);
				match(T__8);
				setState(560);
				body();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(562);
				match(T__51);
				setState(563);
				expr();
				setState(564);
				match(T__53);
				setState(565);
				expr();
				setState(566);
				match(T__52);
				setState(567);
				expr();
				setState(568);
				match(T__8);
				setState(569);
				body();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class WhileOperContext extends ParserRuleContext {
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public BodyContext body() {
			return getRuleContext(BodyContext.class,0);
		}
		public WhileOperContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_whileOper; }
	}

	public final WhileOperContext whileOper() throws RecognitionException {
		WhileOperContext _localctx = new WhileOperContext(_ctx, getState());
		enterRule(_localctx, 96, RULE_whileOper);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(573);
			match(T__54);
			setState(574);
			expr();
			setState(575);
			match(T__8);
			setState(576);
			body();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class BodyContext extends ParserRuleContext {
		public CodesContext codes() {
			return getRuleContext(CodesContext.class,0);
		}
		public CodeContext code() {
			return getRuleContext(CodeContext.class,0);
		}
		public BodyContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_body; }
	}

	public final BodyContext body() throws RecognitionException {
		BodyContext _localctx = new BodyContext(_ctx, getState());
		enterRule(_localctx, 98, RULE_body);
		try {
			setState(583);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__9:
				enterOuterAlt(_localctx, 1);
				{
				setState(578);
				match(T__9);
				setState(579);
				codes();
				setState(580);
				match(T__10);
				}
				break;
			case EOF:
			case T__1:
			case T__3:
			case T__4:
			case T__6:
			case T__7:
			case T__8:
			case T__10:
			case T__12:
			case T__13:
			case T__14:
			case T__15:
			case T__21:
			case T__22:
			case T__23:
			case T__24:
			case T__25:
			case T__26:
			case T__27:
			case T__28:
			case T__29:
			case T__30:
			case T__31:
			case T__32:
			case T__33:
			case T__34:
			case T__42:
			case T__43:
			case T__44:
			case T__45:
			case T__46:
			case T__47:
			case T__48:
			case T__49:
			case T__50:
			case T__51:
			case T__52:
			case T__53:
			case T__54:
			case T__55:
			case T__56:
			case ID:
			case NEXTLINE:
			case INT:
			case REAL:
				enterOuterAlt(_localctx, 2);
				{
				setState(582);
				code();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class UseFuncContext extends ParserRuleContext {
		public UserFuncContext userFunc() {
			return getRuleContext(UserFuncContext.class,0);
		}
		public PrintContext print() {
			return getRuleContext(PrintContext.class,0);
		}
		public UseFuncContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_useFunc; }
	}

	public final UseFuncContext useFunc() throws RecognitionException {
		UseFuncContext _localctx = new UseFuncContext(_ctx, getState());
		enterRule(_localctx, 100, RULE_useFunc);
		try {
			setState(587);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case ID:
				enterOuterAlt(_localctx, 1);
				{
				setState(585);
				userFunc();
				}
				break;
			case T__55:
			case T__56:
				enterOuterAlt(_localctx, 2);
				{
				setState(586);
				print();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class UserFuncContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(KotlinParser.ID, 0); }
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public UserFuncContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_userFunc; }
	}

	public final UserFuncContext userFunc() throws RecognitionException {
		UserFuncContext _localctx = new UserFuncContext(_ctx, getState());
		enterRule(_localctx, 102, RULE_userFunc);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(589);
			match(ID);
			setState(590);
			match(T__6);
			setState(599);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,63,_ctx) ) {
			case 1:
				{
				setState(591);
				expr();
				setState(596);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==T__7) {
					{
					{
					setState(592);
					match(T__7);
					setState(593);
					expr();
					}
					}
					setState(598);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			}
			setState(601);
			match(T__8);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class PrintContext extends ParserRuleContext {
		public PrintTextContext printText() {
			return getRuleContext(PrintTextContext.class,0);
		}
		public PrintContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_print; }
	}

	public final PrintContext print() throws RecognitionException {
		PrintContext _localctx = new PrintContext(_ctx, getState());
		enterRule(_localctx, 104, RULE_print);
		try {
			setState(615);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__55:
				enterOuterAlt(_localctx, 1);
				{
				setState(603);
				match(T__55);
				setState(604);
				match(T__6);
				setState(606);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,64,_ctx) ) {
				case 1:
					{
					setState(605);
					printText();
					}
					break;
				}
				setState(608);
				match(T__8);
				}
				break;
			case T__56:
				enterOuterAlt(_localctx, 2);
				{
				setState(609);
				match(T__56);
				setState(610);
				match(T__6);
				setState(612);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,65,_ctx) ) {
				case 1:
					{
					setState(611);
					printText();
					}
					break;
				}
				setState(614);
				match(T__8);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class PrintTextContext extends ParserRuleContext {
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public PrintTextContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_printText; }
	}

	public final PrintTextContext printText() throws RecognitionException {
		PrintTextContext _localctx = new PrintTextContext(_ctx, getState());
		enterRule(_localctx, 106, RULE_printText);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(617);
			expr();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TypeContext extends ParserRuleContext {
		public NullableTypeContext nullableType() {
			return getRuleContext(NullableTypeContext.class,0);
		}
		public UserTypeContext userType() {
			return getRuleContext(UserTypeContext.class,0);
		}
		public OriginalTypeContext originalType() {
			return getRuleContext(OriginalTypeContext.class,0);
		}
		public TypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_type; }
	}

	public final TypeContext type() throws RecognitionException {
		TypeContext _localctx = new TypeContext(_ctx, getState());
		enterRule(_localctx, 108, RULE_type);
		try {
			setState(622);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,67,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(619);
				nullableType();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(620);
				userType();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(621);
				originalType();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class NullableTypeContext extends ParserRuleContext {
		public OriginalTypeContext originalType() {
			return getRuleContext(OriginalTypeContext.class,0);
		}
		public NullableTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_nullableType; }
	}

	public final NullableTypeContext nullableType() throws RecognitionException {
		NullableTypeContext _localctx = new NullableTypeContext(_ctx, getState());
		enterRule(_localctx, 110, RULE_nullableType);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(624);
			originalType();
			setState(625);
			match(T__57);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class UserTypeContext extends ParserRuleContext {
		public OriginalTypeContext originalType() {
			return getRuleContext(OriginalTypeContext.class,0);
		}
		public ObTypeContext obType() {
			return getRuleContext(ObTypeContext.class,0);
		}
		public UserTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_userType; }
	}

	public final UserTypeContext userType() throws RecognitionException {
		UserTypeContext _localctx = new UserTypeContext(_ctx, getState());
		enterRule(_localctx, 112, RULE_userType);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(627);
			originalType();
			setState(629);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,68,_ctx) ) {
			case 1:
				{
				setState(628);
				obType();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ObTypeContext extends ParserRuleContext {
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public ObTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_obType; }
	}

	public final ObTypeContext obType() throws RecognitionException {
		ObTypeContext _localctx = new ObTypeContext(_ctx, getState());
		enterRule(_localctx, 114, RULE_obType);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(631);
			match(T__31);
			setState(632);
			type();
			setState(633);
			match(T__32);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class OriginalTypeContext extends ParserRuleContext {
		public OriginalTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_originalType; }
	}

	public final OriginalTypeContext originalType() throws RecognitionException {
		OriginalTypeContext _localctx = new OriginalTypeContext(_ctx, getState());
		enterRule(_localctx, 116, RULE_originalType);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(635);
			_la = _input.LA(1);
			if ( !(((((_la - 59)) & ~0x3f) == 0 && ((1L << (_la - 59)) & ((1L << (T__58 - 59)) | (1L << (T__59 - 59)) | (1L << (T__60 - 59)) | (1L << (T__61 - 59)) | (1L << (T__62 - 59)) | (1L << (T__63 - 59)) | (1L << (T__64 - 59)))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3K\u0280\4\2\t\2\4"+
		"\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t"+
		"\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \4!"+
		"\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\4+\t+\4"+
		",\t,\4-\t-\4.\t.\4/\t/\4\60\t\60\4\61\t\61\4\62\t\62\4\63\t\63\4\64\t"+
		"\64\4\65\t\65\4\66\t\66\4\67\t\67\48\t8\49\t9\4:\t:\4;\t;\4<\t<\3\2\5"+
		"\2z\n\2\3\2\5\2}\n\2\3\2\6\2\u0080\n\2\r\2\16\2\u0081\3\2\3\2\3\3\3\3"+
		"\3\3\3\3\7\3\u008a\n\3\f\3\16\3\u008d\13\3\3\3\7\3\u0090\n\3\f\3\16\3"+
		"\u0093\13\3\3\4\7\4\u0096\n\4\f\4\16\4\u0099\13\4\3\5\3\5\3\5\3\5\7\5"+
		"\u009f\n\5\f\5\16\5\u00a2\13\5\3\5\7\5\u00a5\n\5\f\5\16\5\u00a8\13\5\3"+
		"\6\3\6\7\6\u00ac\n\6\f\6\16\6\u00af\13\6\3\6\3\6\7\6\u00b3\n\6\f\6\16"+
		"\6\u00b6\13\6\5\6\u00b8\n\6\3\7\3\7\3\7\3\7\3\7\5\7\u00bf\n\7\3\7\3\7"+
		"\7\7\u00c3\n\7\f\7\16\7\u00c6\13\7\3\b\3\b\3\b\3\b\7\b\u00cc\n\b\f\b\16"+
		"\b\u00cf\13\b\5\b\u00d1\n\b\3\b\3\b\3\t\3\t\3\t\3\t\3\n\3\n\5\n\u00db"+
		"\n\n\3\13\3\13\3\13\3\13\3\f\3\f\3\f\3\r\3\r\3\r\7\r\u00e7\n\r\f\r\16"+
		"\r\u00ea\13\r\3\16\3\16\3\16\3\16\3\16\5\16\u00f1\n\16\3\16\3\16\7\16"+
		"\u00f5\n\16\f\16\16\16\u00f8\13\16\3\17\3\17\3\17\3\17\7\17\u00fe\n\17"+
		"\f\17\16\17\u0101\13\17\5\17\u0103\n\17\3\17\3\17\3\20\3\20\3\20\3\20"+
		"\3\20\3\21\3\21\3\21\3\22\3\22\3\22\3\22\3\23\3\23\3\23\7\23\u0116\n\23"+
		"\f\23\16\23\u0119\13\23\5\23\u011b\n\23\3\23\5\23\u011e\n\23\3\24\3\24"+
		"\3\24\3\24\3\24\3\24\5\24\u0126\n\24\3\25\3\25\3\25\3\25\5\25\u012c\n"+
		"\25\3\25\5\25\u012f\n\25\3\25\3\25\5\25\u0133\n\25\3\26\3\26\3\26\3\26"+
		"\3\26\3\26\3\26\3\26\3\26\7\26\u013e\n\26\f\26\16\26\u0141\13\26\5\26"+
		"\u0143\n\26\3\26\5\26\u0146\n\26\3\27\3\27\3\30\3\30\3\30\3\30\3\30\3"+
		"\30\5\30\u0150\n\30\5\30\u0152\n\30\3\31\3\31\3\31\3\31\3\31\3\31\7\31"+
		"\u015a\n\31\f\31\16\31\u015d\13\31\3\31\3\31\5\31\u0161\n\31\3\32\3\32"+
		"\3\32\3\32\3\32\3\32\3\33\3\33\3\33\3\33\3\33\3\33\3\33\3\33\5\33\u0171"+
		"\n\33\3\33\3\33\3\33\3\33\3\33\3\33\3\33\3\33\5\33\u017b\n\33\7\33\u017d"+
		"\n\33\f\33\16\33\u0180\13\33\3\33\3\33\3\34\3\34\3\34\3\34\6\34\u0188"+
		"\n\34\r\34\16\34\u0189\3\34\3\34\5\34\u018e\n\34\3\35\3\35\3\36\3\36\3"+
		"\36\7\36\u0195\n\36\f\36\16\36\u0198\13\36\3\37\3\37\3\37\7\37\u019d\n"+
		"\37\f\37\16\37\u01a0\13\37\3 \3 \3 \3 \7 \u01a6\n \f \16 \u01a9\13 \3"+
		"!\3!\3\"\3\"\3\"\3\"\3\"\7\"\u01b2\n\"\f\"\16\"\u01b5\13\"\3#\3#\3#\3"+
		"#\3#\3#\3#\3#\3#\3#\3#\3#\3#\3#\3#\3#\5#\u01c7\n#\3$\3$\3$\3$\3$\3$\3"+
		"$\3%\3%\3%\3%\3%\3%\3&\3&\3&\3\'\5\'\u01da\n\'\3\'\3\'\3(\3(\3(\3)\5)"+
		"\u01e2\n)\3)\3)\3*\3*\3*\7*\u01e9\n*\f*\16*\u01ec\13*\3+\3+\3+\7+\u01f1"+
		"\n+\f+\16+\u01f4\13+\3+\3+\3+\7+\u01f9\n+\f+\16+\u01fc\13+\3+\3+\3+\3"+
		"+\3+\3+\3+\7+\u0205\n+\f+\16+\u0208\13+\5+\u020a\n+\3,\7,\u020d\n,\f,"+
		"\16,\u0210\13,\3,\3,\3-\3-\3.\3.\7.\u0218\n.\f.\16.\u021b\13.\3/\3/\3"+
		"/\3/\5/\u0221\n/\5/\u0223\n/\3\60\3\60\5\60\u0227\n\60\3\61\3\61\3\61"+
		"\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61"+
		"\3\61\3\61\3\61\3\61\5\61\u023e\n\61\3\62\3\62\3\62\3\62\3\62\3\63\3\63"+
		"\3\63\3\63\3\63\5\63\u024a\n\63\3\64\3\64\5\64\u024e\n\64\3\65\3\65\3"+
		"\65\3\65\3\65\7\65\u0255\n\65\f\65\16\65\u0258\13\65\5\65\u025a\n\65\3"+
		"\65\3\65\3\66\3\66\3\66\5\66\u0261\n\66\3\66\3\66\3\66\3\66\5\66\u0267"+
		"\n\66\3\66\5\66\u026a\n\66\3\67\3\67\38\38\38\58\u0271\n8\39\39\39\3:"+
		"\3:\5:\u0278\n:\3;\3;\3;\3;\3<\3<\3<\2\2=\2\4\6\b\n\f\16\20\22\24\26\30"+
		"\32\34\36 \"$&(*,.\60\62\64\668:<>@BDFHJLNPRTVXZ\\^`bdfhjlnprtv\2\13\4"+
		"\2\6\6DD\3\2\21\22\4\2\16\16\24\27\3\2\34\34\3\2 %\4\2\6\6\61\61\3\2\62"+
		"\63\3\2\64\65\3\2=C\2\u0299\2y\3\2\2\2\4\u0085\3\2\2\2\6\u0097\3\2\2\2"+
		"\b\u009a\3\2\2\2\n\u00b7\3\2\2\2\f\u00b9\3\2\2\2\16\u00c7\3\2\2\2\20\u00d4"+
		"\3\2\2\2\22\u00da\3\2\2\2\24\u00dc\3\2\2\2\26\u00e0\3\2\2\2\30\u00e3\3"+
		"\2\2\2\32\u00eb\3\2\2\2\34\u00f9\3\2\2\2\36\u0106\3\2\2\2 \u010b\3\2\2"+
		"\2\"\u010e\3\2\2\2$\u011a\3\2\2\2&\u0125\3\2\2\2(\u0132\3\2\2\2*\u0145"+
		"\3\2\2\2,\u0147\3\2\2\2.\u0151\3\2\2\2\60\u0153\3\2\2\2\62\u0162\3\2\2"+
		"\2\64\u0168\3\2\2\2\66\u018d\3\2\2\28\u018f\3\2\2\2:\u0191\3\2\2\2<\u0199"+
		"\3\2\2\2>\u01a1\3\2\2\2@\u01aa\3\2\2\2B\u01ac\3\2\2\2D\u01c6\3\2\2\2F"+
		"\u01c8\3\2\2\2H\u01cf\3\2\2\2J\u01d5\3\2\2\2L\u01d9\3\2\2\2N\u01dd\3\2"+
		"\2\2P\u01e1\3\2\2\2R\u01e5\3\2\2\2T\u0209\3\2\2\2V\u020e\3\2\2\2X\u0213"+
		"\3\2\2\2Z\u0215\3\2\2\2\\\u0222\3\2\2\2^\u0226\3\2\2\2`\u023d\3\2\2\2"+
		"b\u023f\3\2\2\2d\u0249\3\2\2\2f\u024d\3\2\2\2h\u024f\3\2\2\2j\u0269\3"+
		"\2\2\2l\u026b\3\2\2\2n\u0270\3\2\2\2p\u0272\3\2\2\2r\u0275\3\2\2\2t\u0279"+
		"\3\2\2\2v\u027d\3\2\2\2xz\5\4\3\2yx\3\2\2\2yz\3\2\2\2z|\3\2\2\2{}\5\6"+
		"\4\2|{\3\2\2\2|}\3\2\2\2}\177\3\2\2\2~\u0080\5\n\6\2\177~\3\2\2\2\u0080"+
		"\u0081\3\2\2\2\u0081\177\3\2\2\2\u0081\u0082\3\2\2\2\u0082\u0083\3\2\2"+
		"\2\u0083\u0084\7\2\2\3\u0084\3\3\2\2\2\u0085\u0086\7\3\2\2\u0086\u008b"+
		"\7D\2\2\u0087\u0088\7\4\2\2\u0088\u008a\7D\2\2\u0089\u0087\3\2\2\2\u008a"+
		"\u008d\3\2\2\2\u008b\u0089\3\2\2\2\u008b\u008c\3\2\2\2\u008c\u0091\3\2"+
		"\2\2\u008d\u008b\3\2\2\2\u008e\u0090\7E\2\2\u008f\u008e\3\2\2\2\u0090"+
		"\u0093\3\2\2\2\u0091\u008f\3\2\2\2\u0091\u0092\3\2\2\2\u0092\5\3\2\2\2"+
		"\u0093\u0091\3\2\2\2\u0094\u0096\5\b\5\2\u0095\u0094\3\2\2\2\u0096\u0099"+
		"\3\2\2\2\u0097\u0095\3\2\2\2\u0097\u0098\3\2\2\2\u0098\7\3\2\2\2\u0099"+
		"\u0097\3\2\2\2\u009a\u009b\7\5\2\2\u009b\u00a0\7D\2\2\u009c\u009d\7\4"+
		"\2\2\u009d\u009f\t\2\2\2\u009e\u009c\3\2\2\2\u009f\u00a2\3\2\2\2\u00a0"+
		"\u009e\3\2\2\2\u00a0\u00a1\3\2\2\2\u00a1\u00a6\3\2\2\2\u00a2\u00a0\3\2"+
		"\2\2\u00a3\u00a5\7E\2\2\u00a4\u00a3\3\2\2\2\u00a5\u00a8\3\2\2\2\u00a6"+
		"\u00a4\3\2\2\2\u00a6\u00a7\3\2\2\2\u00a7\t\3\2\2\2\u00a8\u00a6\3\2\2\2"+
		"\u00a9\u00ad\5\f\7\2\u00aa\u00ac\7E\2\2\u00ab\u00aa\3\2\2\2\u00ac\u00af"+
		"\3\2\2\2\u00ad\u00ab\3\2\2\2\u00ad\u00ae\3\2\2\2\u00ae\u00b8\3\2\2\2\u00af"+
		"\u00ad\3\2\2\2\u00b0\u00b4\5\32\16\2\u00b1\u00b3\7E\2\2\u00b2\u00b1\3"+
		"\2\2\2\u00b3\u00b6\3\2\2\2\u00b4\u00b2\3\2\2\2\u00b4\u00b5\3\2\2\2\u00b5"+
		"\u00b8\3\2\2\2\u00b6\u00b4\3\2\2\2\u00b7\u00a9\3\2\2\2\u00b7\u00b0\3\2"+
		"\2\2\u00b8\13\3\2\2\2\u00b9\u00ba\7\7\2\2\u00ba\u00bb\7D\2\2\u00bb\u00be"+
		"\5\16\b\2\u00bc\u00bd\7\b\2\2\u00bd\u00bf\5n8\2\u00be\u00bc\3\2\2\2\u00be"+
		"\u00bf\3\2\2\2\u00bf\u00c0\3\2\2\2\u00c0\u00c4\5\22\n\2\u00c1\u00c3\7"+
		"E\2\2\u00c2\u00c1\3\2\2\2\u00c3\u00c6\3\2\2\2\u00c4\u00c2\3\2\2\2\u00c4"+
		"\u00c5\3\2\2\2\u00c5\r\3\2\2\2\u00c6\u00c4\3\2\2\2\u00c7\u00d0\7\t\2\2"+
		"\u00c8\u00cd\5\20\t\2\u00c9\u00ca\7\n\2\2\u00ca\u00cc\5\20\t\2\u00cb\u00c9"+
		"\3\2\2\2\u00cc\u00cf\3\2\2\2\u00cd\u00cb\3\2\2\2\u00cd\u00ce\3\2\2\2\u00ce"+
		"\u00d1\3\2\2\2\u00cf\u00cd\3\2\2\2\u00d0\u00c8\3\2\2\2\u00d0\u00d1\3\2"+
		"\2\2\u00d1\u00d2\3\2\2\2\u00d2\u00d3\7\13\2\2\u00d3\17\3\2\2\2\u00d4\u00d5"+
		"\7D\2\2\u00d5\u00d6\7\b\2\2\u00d6\u00d7\5n8\2\u00d7\21\3\2\2\2\u00d8\u00db"+
		"\5\24\13\2\u00d9\u00db\5\26\f\2\u00da\u00d8\3\2\2\2\u00da\u00d9\3\2\2"+
		"\2\u00db\23\3\2\2\2\u00dc\u00dd\7\f\2\2\u00dd\u00de\5$\23\2\u00de\u00df"+
		"\7\r\2\2\u00df\25\3\2\2\2\u00e0\u00e1\7\16\2\2\u00e1\u00e2\5&\24\2\u00e2"+
		"\27\3\2\2\2\u00e3\u00e4\7\17\2\2\u00e4\u00e8\58\35\2\u00e5\u00e7\7E\2"+
		"\2\u00e6\u00e5\3\2\2\2\u00e7\u00ea\3\2\2\2\u00e8\u00e6\3\2\2\2\u00e8\u00e9"+
		"\3\2\2\2\u00e9\31\3\2\2\2\u00ea\u00e8\3\2\2\2\u00eb\u00ec\7\20\2\2\u00ec"+
		"\u00ed\7D\2\2\u00ed\u00f0\5\34\17\2\u00ee\u00ef\7\b\2\2\u00ef\u00f1\5"+
		" \21\2\u00f0\u00ee\3\2\2\2\u00f0\u00f1\3\2\2\2\u00f1\u00f2\3\2\2\2\u00f2"+
		"\u00f6\5\"\22\2\u00f3\u00f5\7E\2\2\u00f4\u00f3\3\2\2\2\u00f5\u00f8\3\2"+
		"\2\2\u00f6\u00f4\3\2\2\2\u00f6\u00f7\3\2\2\2\u00f7\33\3\2\2\2\u00f8\u00f6"+
		"\3\2\2\2\u00f9\u0102\7\t\2\2\u00fa\u00ff\5\36\20\2\u00fb\u00fc\7\n\2\2"+
		"\u00fc\u00fe\5\36\20\2\u00fd\u00fb\3\2\2\2\u00fe\u0101\3\2\2\2\u00ff\u00fd"+
		"\3\2\2\2\u00ff\u0100\3\2\2\2\u0100\u0103\3\2\2\2\u0101\u00ff\3\2\2\2\u0102"+
		"\u00fa\3\2\2\2\u0102\u0103\3\2\2\2\u0103\u0104\3\2\2\2\u0104\u0105\7\13"+
		"\2\2\u0105\35\3\2\2\2\u0106\u0107\t\3\2\2\u0107\u0108\7D\2\2\u0108\u0109"+
		"\7\b\2\2\u0109\u010a\5n8\2\u010a\37\3\2\2\2\u010b\u010c\7D\2\2\u010c\u010d"+
		"\7\23\2\2\u010d!\3\2\2\2\u010e\u010f\7\f\2\2\u010f\u0110\5$\23\2\u0110"+
		"\u0111\7\r\2\2\u0111#\3\2\2\2\u0112\u0117\5&\24\2\u0113\u0114\7E\2\2\u0114"+
		"\u0116\5&\24\2\u0115\u0113\3\2\2\2\u0116\u0119\3\2\2\2\u0117\u0115\3\2"+
		"\2\2\u0117\u0118\3\2\2\2\u0118\u011b\3\2\2\2\u0119\u0117\3\2\2\2\u011a"+
		"\u0112\3\2\2\2\u011a\u011b\3\2\2\2\u011b\u011d\3\2\2\2\u011c\u011e\7E"+
		"\2\2\u011d\u011c\3\2\2\2\u011d\u011e\3\2\2\2\u011e%\3\2\2\2\u011f\u0126"+
		"\5^\60\2\u0120\u0126\5(\25\2\u0121\u0126\5.\30\2\u0122\u0126\58\35\2\u0123"+
		"\u0126\5\n\6\2\u0124\u0126\5f\64\2\u0125\u011f\3\2\2\2\u0125\u0120\3\2"+
		"\2\2\u0125\u0121\3\2\2\2\u0125\u0122\3\2\2\2\u0125\u0123\3\2\2\2\u0125"+
		"\u0124\3\2\2\2\u0126\'\3\2\2\2\u0127\u0128\t\3\2\2\u0128\u012b\7D\2\2"+
		"\u0129\u012a\7\b\2\2\u012a\u012c\5n8\2\u012b\u0129\3\2\2\2\u012b\u012c"+
		"\3\2\2\2\u012c\u012e\3\2\2\2\u012d\u012f\5*\26\2\u012e\u012d\3\2\2\2\u012e"+
		"\u012f\3\2\2\2\u012f\u0133\3\2\2\2\u0130\u0131\7D\2\2\u0131\u0133\5*\26"+
		"\2\u0132\u0127\3\2\2\2\u0132\u0130\3\2\2\2\u0133)\3\2\2\2\u0134\u0135"+
		"\5,\27\2\u0135\u0136\58\35\2\u0136\u0146\3\2\2\2\u0137\u0138\7\16\2\2"+
		"\u0138\u0139\7D\2\2\u0139\u0142\7\t\2\2\u013a\u013f\58\35\2\u013b\u013c"+
		"\7\n\2\2\u013c\u013e\58\35\2\u013d\u013b\3\2\2\2\u013e\u0141\3\2\2\2\u013f"+
		"\u013d\3\2\2\2\u013f\u0140\3\2\2\2\u0140\u0143\3\2\2\2\u0141\u013f\3\2"+
		"\2\2\u0142\u013a\3\2\2\2\u0142\u0143\3\2\2\2\u0143\u0144\3\2\2\2\u0144"+
		"\u0146\7\13\2\2\u0145\u0134\3\2\2\2\u0145\u0137\3\2\2\2\u0146+\3\2\2\2"+
		"\u0147\u0148\t\4\2\2\u0148-\3\2\2\2\u0149\u0152\5\60\31\2\u014a\u0152"+
		"\5\62\32\2\u014b\u0152\5\66\34\2\u014c\u0152\7D\2\2\u014d\u0152\5h\65"+
		"\2\u014e\u0150\5\30\r\2\u014f\u014e\3\2\2\2\u014f\u0150\3\2\2\2\u0150"+
		"\u0152\3\2\2\2\u0151\u0149\3\2\2\2\u0151\u014a\3\2\2\2\u0151\u014b\3\2"+
		"\2\2\u0151\u014c\3\2\2\2\u0151\u014d\3\2\2\2\u0151\u014f\3\2\2\2\u0152"+
		"/\3\2\2\2\u0153\u0154\7\30\2\2\u0154\u0155\7\t\2\2\u0155\u0156\58\35\2"+
		"\u0156\u0157\7\13\2\2\u0157\u015b\5d\63\2\u0158\u015a\7E\2\2\u0159\u0158"+
		"\3\2\2\2\u015a\u015d\3\2\2\2\u015b\u0159\3\2\2\2\u015b\u015c\3\2\2\2\u015c"+
		"\u0160\3\2\2\2\u015d\u015b\3\2\2\2\u015e\u015f\7\31\2\2\u015f\u0161\5"+
		"d\63\2\u0160\u015e\3\2\2\2\u0160\u0161\3\2\2\2\u0161\61\3\2\2\2\u0162"+
		"\u0163\7\32\2\2\u0163\u0164\7\t\2\2\u0164\u0165\58\35\2\u0165\u0166\7"+
		"\13\2\2\u0166\u0167\5\64\33\2\u0167\63\3\2\2\2\u0168\u0169\7\f\2\2\u0169"+
		"\u016a\58\35\2\u016a\u0170\7\33\2\2\u016b\u016c\7\f\2\2\u016c\u016d\5"+
		"$\23\2\u016d\u016e\7\r\2\2\u016e\u0171\3\2\2\2\u016f\u0171\5&\24\2\u0170"+
		"\u016b\3\2\2\2\u0170\u016f\3\2\2\2\u0171\u017e\3\2\2\2\u0172\u0173\7E"+
		"\2\2\u0173\u0174\58\35\2\u0174\u017a\7\33\2\2\u0175\u0176\7\f\2\2\u0176"+
		"\u0177\5$\23\2\u0177\u0178\7\r\2\2\u0178\u017b\3\2\2\2\u0179\u017b\5&"+
		"\24\2\u017a\u0175\3\2\2\2\u017a\u0179\3\2\2\2\u017b\u017d\3\2\2\2\u017c"+
		"\u0172\3\2\2\2\u017d\u0180\3\2\2\2\u017e\u017c\3\2\2\2\u017e\u017f\3\2"+
		"\2\2\u017f\u0181\3\2\2\2\u0180\u017e\3\2\2\2\u0181\u0182\7\r\2\2\u0182"+
		"\65\3\2\2\2\u0183\u018e\7F\2\2\u0184\u018e\7G\2\2\u0185\u0187\7\34\2\2"+
		"\u0186\u0188\n\5\2\2\u0187\u0186\3\2\2\2\u0188\u0189\3\2\2\2\u0189\u0187"+
		"\3\2\2\2\u0189\u018a\3\2\2\2\u018a\u018b\3\2\2\2\u018b\u018e\7\34\2\2"+
		"\u018c\u018e\7\35\2\2\u018d\u0183\3\2\2\2\u018d\u0184\3\2\2\2\u018d\u0185"+
		"\3\2\2\2\u018d\u018c\3\2\2\2\u018e\67\3\2\2\2\u018f\u0190\5:\36\2\u0190"+
		"9\3\2\2\2\u0191\u0196\5<\37\2\u0192\u0193\7\36\2\2\u0193\u0195\5<\37\2"+
		"\u0194\u0192\3\2\2\2\u0195\u0198\3\2\2\2\u0196\u0194\3\2\2\2\u0196\u0197"+
		"\3\2\2\2\u0197;\3\2\2\2\u0198\u0196\3\2\2\2\u0199\u019e\5> \2\u019a\u019b"+
		"\7\37\2\2\u019b\u019d\5> \2\u019c\u019a\3\2\2\2\u019d\u01a0\3\2\2\2\u019e"+
		"\u019c\3\2\2\2\u019e\u019f\3\2\2\2\u019f=\3\2\2\2\u01a0\u019e\3\2\2\2"+
		"\u01a1\u01a7\5B\"\2\u01a2\u01a3\5@!\2\u01a3\u01a4\5B\"\2\u01a4\u01a6\3"+
		"\2\2\2\u01a5\u01a2\3\2\2\2\u01a6\u01a9\3\2\2\2\u01a7\u01a5\3\2\2\2\u01a7"+
		"\u01a8\3\2\2\2\u01a8?\3\2\2\2\u01a9\u01a7\3\2\2\2\u01aa\u01ab\t\6\2\2"+
		"\u01abA\3\2\2\2\u01ac\u01b3\5R*\2\u01ad\u01ae\7\4\2\2\u01ae\u01b2\5D#"+
		"\2\u01af\u01b2\5N(\2\u01b0\u01b2\5J&\2\u01b1\u01ad\3\2\2\2\u01b1\u01af"+
		"\3\2\2\2\u01b1\u01b0\3\2\2\2\u01b2\u01b5\3\2\2\2\u01b3\u01b1\3\2\2\2\u01b3"+
		"\u01b4\3\2\2\2\u01b4C\3\2\2\2\u01b5\u01b3\3\2\2\2\u01b6\u01b7\7&\2\2\u01b7"+
		"\u01b8\7\f\2\2\u01b8\u01b9\5F$\2\u01b9\u01ba\7\r\2\2\u01ba\u01c7\3\2\2"+
		"\2\u01bb\u01bc\7\'\2\2\u01bc\u01bd\7\f\2\2\u01bd\u01be\7D\2\2\u01be\u01c7"+
		"\7\r\2\2\u01bf\u01c0\7(\2\2\u01c0\u01c7\5H%\2\u01c1\u01c2\7)\2\2\u01c2"+
		"\u01c3\7\f\2\2\u01c3\u01c4\5$\23\2\u01c4\u01c5\7\r\2\2\u01c5\u01c7\3\2"+
		"\2\2\u01c6\u01b6\3\2\2\2\u01c6\u01bb\3\2\2\2\u01c6\u01bf\3\2\2\2\u01c6"+
		"\u01c1\3\2\2\2\u01c7E\3\2\2\2\u01c8\u01c9\7*\2\2\u01c9\u01ca\7\4\2\2\u01ca"+
		"\u01cb\7+\2\2\u01cb\u01cc\7\t\2\2\u01cc\u01cd\58\35\2\u01cd\u01ce\7\13"+
		"\2\2\u01ceG\3\2\2\2\u01cf\u01d0\7*\2\2\u01d0\u01d1\7\4\2\2\u01d1\u01d2"+
		"\7,\2\2\u01d2\u01d3\7\t\2\2\u01d3\u01d4\7\13\2\2\u01d4I\3\2\2\2\u01d5"+
		"\u01d6\5L\'\2\u01d6\u01d7\5n8\2\u01d7K\3\2\2\2\u01d8\u01da\7-\2\2\u01d9"+
		"\u01d8\3\2\2\2\u01d9\u01da\3\2\2\2\u01da\u01db\3\2\2\2\u01db\u01dc\7."+
		"\2\2\u01dcM\3\2\2\2\u01dd\u01de\5P)\2\u01de\u01df\58\35\2\u01dfO\3\2\2"+
		"\2\u01e0\u01e2\7-\2\2\u01e1\u01e0\3\2\2\2\u01e1\u01e2\3\2\2\2\u01e2\u01e3"+
		"\3\2\2\2\u01e3\u01e4\7/\2\2\u01e4Q\3\2\2\2\u01e5\u01ea\5T+\2\u01e6\u01e7"+
		"\7\60\2\2\u01e7\u01e9\5T+\2\u01e8\u01e6\3\2\2\2\u01e9\u01ec\3\2\2\2\u01ea"+
		"\u01e8\3\2\2\2\u01ea\u01eb\3\2\2\2\u01ebS\3\2\2\2\u01ec\u01ea\3\2\2\2"+
		"\u01ed\u01f2\5V,\2\u01ee\u01ef\t\7\2\2\u01ef\u01f1\5V,\2\u01f0\u01ee\3"+
		"\2\2\2\u01f1\u01f4\3\2\2\2\u01f2\u01f0\3\2\2\2\u01f2\u01f3\3\2\2\2\u01f3"+
		"\u020a\3\2\2\2\u01f4\u01f2\3\2\2\2\u01f5\u01fa\5V,\2\u01f6\u01f7\t\b\2"+
		"\2\u01f7\u01f9\5V,\2\u01f8\u01f6\3\2\2\2\u01f9\u01fc\3\2\2\2\u01fa\u01f8"+
		"\3\2\2\2\u01fa\u01fb\3\2\2\2\u01fb\u020a\3\2\2\2\u01fc\u01fa\3\2\2\2\u01fd"+
		"\u01fe\7\t\2\2\u01fe\u01ff\58\35\2\u01ff\u0206\7\13\2\2\u0200\u0201\t"+
		"\7\2\2\u0201\u0205\5V,\2\u0202\u0203\t\b\2\2\u0203\u0205\5V,\2\u0204\u0200"+
		"\3\2\2\2\u0204\u0202\3\2\2\2\u0205\u0208\3\2\2\2\u0206\u0204\3\2\2\2\u0206"+
		"\u0207\3\2\2\2\u0207\u020a\3\2\2\2\u0208\u0206\3\2\2\2\u0209\u01ed\3\2"+
		"\2\2\u0209\u01f5\3\2\2\2\u0209\u01fd\3\2\2\2\u020aU\3\2\2\2\u020b\u020d"+
		"\5X-\2\u020c\u020b\3\2\2\2\u020d\u0210\3\2\2\2\u020e\u020c\3\2\2\2\u020e"+
		"\u020f\3\2\2\2\u020f\u0211\3\2\2\2\u0210\u020e\3\2\2\2\u0211\u0212\5Z"+
		".\2\u0212W\3\2\2\2\u0213\u0214\t\t\2\2\u0214Y\3\2\2\2\u0215\u0219\5.\30"+
		"\2\u0216\u0218\5\\/\2\u0217\u0216\3\2\2\2\u0218\u021b\3\2\2\2\u0219\u0217"+
		"\3\2\2\2\u0219\u021a\3\2\2\2\u021a[\3\2\2\2\u021b\u0219\3\2\2\2\u021c"+
		"\u0223\5X-\2\u021d\u021e\7\4\2\2\u021e\u0220\7D\2\2\u021f\u0221\7\23\2"+
		"\2\u0220\u021f\3\2\2\2\u0220\u0221\3\2\2\2\u0221\u0223\3\2\2\2\u0222\u021c"+
		"\3\2\2\2\u0222\u021d\3\2\2\2\u0223]\3\2\2\2\u0224\u0227\5`\61\2\u0225"+
		"\u0227\5b\62\2\u0226\u0224\3\2\2\2\u0226\u0225\3\2\2\2\u0227_\3\2\2\2"+
		"\u0228\u0229\7\66\2\2\u0229\u022a\58\35\2\u022a\u022b\7\13\2\2\u022b\u022c"+
		"\5d\63\2\u022c\u023e\3\2\2\2\u022d\u022e\7\66\2\2\u022e\u022f\58\35\2"+
		"\u022f\u0230\7\67\2\2\u0230\u0231\58\35\2\u0231\u0232\7\13\2\2\u0232\u0233"+
		"\5d\63\2\u0233\u023e\3\2\2\2\u0234\u0235\7\66\2\2\u0235\u0236\58\35\2"+
		"\u0236\u0237\78\2\2\u0237\u0238\58\35\2\u0238\u0239\7\67\2\2\u0239\u023a"+
		"\58\35\2\u023a\u023b\7\13\2\2\u023b\u023c\5d\63\2\u023c\u023e\3\2\2\2"+
		"\u023d\u0228\3\2\2\2\u023d\u022d\3\2\2\2\u023d\u0234\3\2\2\2\u023ea\3"+
		"\2\2\2\u023f\u0240\79\2\2\u0240\u0241\58\35\2\u0241\u0242\7\13\2\2\u0242"+
		"\u0243\5d\63\2\u0243c\3\2\2\2\u0244\u0245\7\f\2\2\u0245\u0246\5$\23\2"+
		"\u0246\u0247\7\r\2\2\u0247\u024a\3\2\2\2\u0248\u024a\5&\24\2\u0249\u0244"+
		"\3\2\2\2\u0249\u0248\3\2\2\2\u024ae\3\2\2\2\u024b\u024e\5h\65\2\u024c"+
		"\u024e\5j\66\2\u024d\u024b\3\2\2\2\u024d\u024c\3\2\2\2\u024eg\3\2\2\2"+
		"\u024f\u0250\7D\2\2\u0250\u0259\7\t\2\2\u0251\u0256\58\35\2\u0252\u0253"+
		"\7\n\2\2\u0253\u0255\58\35\2\u0254\u0252\3\2\2\2\u0255\u0258\3\2\2\2\u0256"+
		"\u0254\3\2\2\2\u0256\u0257\3\2\2\2\u0257\u025a\3\2\2\2\u0258\u0256\3\2"+
		"\2\2\u0259\u0251\3\2\2\2\u0259\u025a\3\2\2\2\u025a\u025b\3\2\2\2\u025b"+
		"\u025c\7\13\2\2\u025ci\3\2\2\2\u025d\u025e\7:\2\2\u025e\u0260\7\t\2\2"+
		"\u025f\u0261\5l\67\2\u0260\u025f\3\2\2\2\u0260\u0261\3\2\2\2\u0261\u0262"+
		"\3\2\2\2\u0262\u026a\7\13\2\2\u0263\u0264\7;\2\2\u0264\u0266\7\t\2\2\u0265"+
		"\u0267\5l\67\2\u0266\u0265\3\2\2\2\u0266\u0267\3\2\2\2\u0267\u0268\3\2"+
		"\2\2\u0268\u026a\7\13\2\2\u0269\u025d\3\2\2\2\u0269\u0263\3\2\2\2\u026a"+
		"k\3\2\2\2\u026b\u026c\58\35\2\u026cm\3\2\2\2\u026d\u0271\5p9\2\u026e\u0271"+
		"\5r:\2\u026f\u0271\5v<\2\u0270\u026d\3\2\2\2\u0270\u026e\3\2\2\2\u0270"+
		"\u026f\3\2\2\2\u0271o\3\2\2\2\u0272\u0273\5v<\2\u0273\u0274\7<\2\2\u0274"+
		"q\3\2\2\2\u0275\u0277\5v<\2\u0276\u0278\5t;\2\u0277\u0276\3\2\2\2\u0277"+
		"\u0278\3\2\2\2\u0278s\3\2\2\2\u0279\u027a\7\"\2\2\u027a\u027b\5n8\2\u027b"+
		"\u027c\7#\2\2\u027cu\3\2\2\2\u027d\u027e\t\n\2\2\u027ew\3\2\2\2Gy|\u0081"+
		"\u008b\u0091\u0097\u00a0\u00a6\u00ad\u00b4\u00b7\u00be\u00c4\u00cd\u00d0"+
		"\u00da\u00e8\u00f0\u00f6\u00ff\u0102\u0117\u011a\u011d\u0125\u012b\u012e"+
		"\u0132\u013f\u0142\u0145\u014f\u0151\u015b\u0160\u0170\u017a\u017e\u0189"+
		"\u018d\u0196\u019e\u01a7\u01b1\u01b3\u01c6\u01d9\u01e1\u01ea\u01f2\u01fa"+
		"\u0204\u0206\u0209\u020e\u0219\u0220\u0222\u0226\u023d\u0249\u024d\u0256"+
		"\u0259\u0260\u0266\u0269\u0270\u0277";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}