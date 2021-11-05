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
		T__59=60, T__60=61, PACKAGENAME=62, IMPORTNAME=63, FUNCTIONID=64, CLASSID=65, 
		ID=66, DOTFUNC=67, NEXTLINE=68, NOT=69, INT=70, REAL=71, STRING=72;
	public static final int
		RULE_kotlin = 0, RULE_package = 1, RULE_imports = 2, RULE_declaration = 3, 
		RULE_functionObject = 4, RULE_functinParameters = 5, RULE_functinParameter = 6, 
		RULE_functionBody = 7, RULE_blockFunction = 8, RULE_simpleFunction = 9, 
		RULE_classObject = 10, RULE_classParameters = 11, RULE_classParameter = 12, 
		RULE_inheritanceClass = 13, RULE_classBody = 14, RULE_codes = 15, RULE_code = 16, 
		RULE_variablesDeclare = 17, RULE_assn = 18, RULE_substitutionOperator = 19, 
		RULE_expression = 20, RULE_ifExpr = 21, RULE_elseExpr = 22, RULE_ifbody = 23, 
		RULE_whenExpr = 24, RULE_whenbody = 25, RULE_literalConstant = 26, RULE_expr = 27, 
		RULE_orOper = 28, RULE_andOper = 29, RULE_compare = 30, RULE_compareOperator = 31, 
		RULE_infix = 32, RULE_listFunc = 33, RULE_filterBody = 34, RULE_mapBody = 35, 
		RULE_typeCheck = 36, RULE_typeCheckOperator = 37, RULE_inCheck = 38, RULE_inCheckOperator = 39, 
		RULE_list = 40, RULE_calcul = 41, RULE_prefix = 42, RULE_prefixOperator = 43, 
		RULE_postfix = 44, RULE_postfixOperator = 45, RULE_loop = 46, RULE_forOper = 47, 
		RULE_whileOper = 48, RULE_loopBody = 49, RULE_useFunc = 50, RULE_userFunc = 51, 
		RULE_print = 52, RULE_printText = 53, RULE_type = 54, RULE_nullableType = 55, 
		RULE_userType = 56, RULE_obType = 57, RULE_originalType = 58;
	private static String[] makeRuleNames() {
		return new String[] {
			"kotlin", "package", "imports", "declaration", "functionObject", "functinParameters", 
			"functinParameter", "functionBody", "blockFunction", "simpleFunction", 
			"classObject", "classParameters", "classParameter", "inheritanceClass", 
			"classBody", "codes", "code", "variablesDeclare", "assn", "substitutionOperator", 
			"expression", "ifExpr", "elseExpr", "ifbody", "whenExpr", "whenbody", 
			"literalConstant", "expr", "orOper", "andOper", "compare", "compareOperator", 
			"infix", "listFunc", "filterBody", "mapBody", "typeCheck", "typeCheckOperator", 
			"inCheck", "inCheckOperator", "list", "calcul", "prefix", "prefixOperator", 
			"postfix", "postfixOperator", "loop", "forOper", "whileOper", "loopBody", 
			"useFunc", "userFunc", "print", "printText", "type", "nullableType", 
			"userType", "obType", "originalType"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'package'", "'import'", "'fun'", "':'", "'('", "','", "')'", "'{'", 
			"'}'", "'='", "'class'", "'var'", "'val'", "'()'", "'+='", "'-='", "'*='", 
			"'/='", "'if'", "'else'", "'when'", "'->'", "'\"'", "'null'", "'||'", 
			"'&&'", "'!='", "'=='", "'<'", "'>'", "'<='", "'>='", "'.'", "'.filter'", 
			"'.sortedBy'", "'.map'", "'.forEach'", "'it'", "'startWith'", "'uppercase'", 
			"'is'", "'in'", "'..'", "'*'", "'/'", "'+'", "'-'", "'++'", "'--'", "'for ('", 
			"'step'", "'downTo'", "'while ('", "'print'", "'println'", "'?'", "'Int'", 
			"'Unit'", "'Real'", "'String'", "'Array'", null, null, null, null, null, 
			null, null, "'!'"
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
			null, null, "PACKAGENAME", "IMPORTNAME", "FUNCTIONID", "CLASSID", "ID", 
			"DOTFUNC", "NEXTLINE", "NOT", "INT", "REAL", "STRING"
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
		public List<PackageContext> package() {
			return getRuleContexts(PackageContext.class);
		}
		public PackageContext package(int i) {
			return getRuleContext(PackageContext.class,i);
		}
		public List<ImportsContext> imports() {
			return getRuleContexts(ImportsContext.class);
		}
		public ImportsContext imports(int i) {
			return getRuleContext(ImportsContext.class,i);
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
			do {
				{
				{
				setState(118);
				package();
				}
				}
				setState(121); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( _la==T__0 );
			setState(126);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__1) {
				{
				{
				setState(123);
				imports();
				}
				}
				setState(128);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(132);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__2 || _la==T__10) {
				{
				{
				setState(129);
				declaration();
				}
				}
				setState(134);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(135);
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
		public TerminalNode PACKAGENAME() { return getToken(KotlinParser.PACKAGENAME, 0); }
		public TerminalNode NEXTLINE() { return getToken(KotlinParser.NEXTLINE, 0); }
		public PackageContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_package; }
	}

	public final PackageContext package() throws RecognitionException {
		PackageContext _localctx = new PackageContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_package);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(137);
			match(T__0);
			setState(138);
			match(PACKAGENAME);
			setState(139);
			match(NEXTLINE);
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
		public TerminalNode IMPORTNAME() { return getToken(KotlinParser.IMPORTNAME, 0); }
		public TerminalNode NEXTLINE() { return getToken(KotlinParser.NEXTLINE, 0); }
		public ImportsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_imports; }
	}

	public final ImportsContext imports() throws RecognitionException {
		ImportsContext _localctx = new ImportsContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_imports);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(141);
			match(T__1);
			setState(142);
			match(IMPORTNAME);
			setState(143);
			match(NEXTLINE);
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
		enterRule(_localctx, 6, RULE_declaration);
		try {
			setState(147);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__2:
				enterOuterAlt(_localctx, 1);
				{
				setState(145);
				functionObject();
				}
				break;
			case T__10:
				enterOuterAlt(_localctx, 2);
				{
				setState(146);
				classObject();
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
		public TerminalNode FUNCTIONID() { return getToken(KotlinParser.FUNCTIONID, 0); }
		public FunctinParametersContext functinParameters() {
			return getRuleContext(FunctinParametersContext.class,0);
		}
		public FunctionBodyContext functionBody() {
			return getRuleContext(FunctionBodyContext.class,0);
		}
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public FunctionObjectContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_functionObject; }
	}

	public final FunctionObjectContext functionObject() throws RecognitionException {
		FunctionObjectContext _localctx = new FunctionObjectContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_functionObject);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(149);
			match(T__2);
			setState(150);
			match(FUNCTIONID);
			setState(151);
			functinParameters();
			setState(154);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__3) {
				{
				setState(152);
				match(T__3);
				setState(153);
				type();
				}
			}

			setState(156);
			functionBody();
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
		enterRule(_localctx, 10, RULE_functinParameters);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(158);
			match(T__4);
			setState(167);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==ID) {
				{
				setState(159);
				functinParameter();
				setState(164);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==T__5) {
					{
					{
					setState(160);
					match(T__5);
					setState(161);
					functinParameter();
					}
					}
					setState(166);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			setState(169);
			match(T__6);
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
		enterRule(_localctx, 12, RULE_functinParameter);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(171);
			match(ID);
			setState(172);
			match(T__3);
			setState(173);
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
		enterRule(_localctx, 14, RULE_functionBody);
		try {
			setState(177);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__7:
				enterOuterAlt(_localctx, 1);
				{
				setState(175);
				blockFunction();
				}
				break;
			case T__9:
				enterOuterAlt(_localctx, 2);
				{
				setState(176);
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
		enterRule(_localctx, 16, RULE_blockFunction);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(179);
			match(T__7);
			setState(180);
			codes();
			setState(181);
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
		enterRule(_localctx, 18, RULE_simpleFunction);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(183);
			match(T__9);
			setState(184);
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

	public static class ClassObjectContext extends ParserRuleContext {
		public TerminalNode CLASSID() { return getToken(KotlinParser.CLASSID, 0); }
		public ClassParametersContext classParameters() {
			return getRuleContext(ClassParametersContext.class,0);
		}
		public ClassBodyContext classBody() {
			return getRuleContext(ClassBodyContext.class,0);
		}
		public InheritanceClassContext inheritanceClass() {
			return getRuleContext(InheritanceClassContext.class,0);
		}
		public ClassObjectContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_classObject; }
	}

	public final ClassObjectContext classObject() throws RecognitionException {
		ClassObjectContext _localctx = new ClassObjectContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_classObject);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(186);
			match(T__10);
			setState(187);
			match(CLASSID);
			setState(188);
			classParameters();
			setState(191);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__3) {
				{
				setState(189);
				match(T__3);
				setState(190);
				inheritanceClass();
				}
			}

			setState(193);
			classBody();
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
		enterRule(_localctx, 22, RULE_classParameters);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(195);
			match(T__4);
			setState(204);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__11 || _la==T__12) {
				{
				setState(196);
				classParameter();
				setState(201);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==T__5) {
					{
					{
					setState(197);
					match(T__5);
					setState(198);
					classParameter();
					}
					}
					setState(203);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			setState(206);
			match(T__6);
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
		enterRule(_localctx, 24, RULE_classParameter);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(208);
			_la = _input.LA(1);
			if ( !(_la==T__11 || _la==T__12) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(209);
			match(ID);
			setState(210);
			match(T__3);
			setState(211);
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
		public TerminalNode CLASSID() { return getToken(KotlinParser.CLASSID, 0); }
		public InheritanceClassContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_inheritanceClass; }
	}

	public final InheritanceClassContext inheritanceClass() throws RecognitionException {
		InheritanceClassContext _localctx = new InheritanceClassContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_inheritanceClass);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(213);
			match(CLASSID);
			setState(214);
			match(T__13);
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
		enterRule(_localctx, 28, RULE_classBody);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(216);
			match(T__7);
			setState(217);
			codes();
			setState(218);
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
		enterRule(_localctx, 30, RULE_codes);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(228);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__2) | (1L << T__10) | (1L << T__11) | (1L << T__12) | (1L << T__18) | (1L << T__20) | (1L << T__22) | (1L << T__23) | (1L << T__47) | (1L << T__48) | (1L << T__49) | (1L << T__52) | (1L << T__53) | (1L << T__54))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (FUNCTIONID - 64)) | (1L << (ID - 64)) | (1L << (INT - 64)) | (1L << (REAL - 64)))) != 0)) {
				{
				setState(220);
				code();
				setState(225);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==NEXTLINE) {
					{
					{
					setState(221);
					match(NEXTLINE);
					setState(222);
					code();
					}
					}
					setState(227);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
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
		public DeclarationContext declaration() {
			return getRuleContext(DeclarationContext.class,0);
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
		public LoopContext loop() {
			return getRuleContext(LoopContext.class,0);
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
		enterRule(_localctx, 32, RULE_code);
		try {
			setState(236);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,13,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(230);
				declaration();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(231);
				variablesDeclare();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(232);
				expression();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(233);
				expr();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(234);
				loop();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(235);
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
		public AssnContext assn() {
			return getRuleContext(AssnContext.class,0);
		}
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public VariablesDeclareContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_variablesDeclare; }
	}

	public final VariablesDeclareContext variablesDeclare() throws RecognitionException {
		VariablesDeclareContext _localctx = new VariablesDeclareContext(_ctx, getState());
		enterRule(_localctx, 34, RULE_variablesDeclare);
		int _la;
		try {
			setState(249);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case ID:
				enterOuterAlt(_localctx, 1);
				{
				setState(238);
				match(ID);
				setState(239);
				assn();
				}
				break;
			case T__11:
			case T__12:
				enterOuterAlt(_localctx, 2);
				{
				setState(240);
				_la = _input.LA(1);
				if ( !(_la==T__11 || _la==T__12) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(241);
				match(ID);
				setState(244);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__3) {
					{
					setState(242);
					match(T__3);
					setState(243);
					type();
					}
				}

				setState(247);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__9) | (1L << T__14) | (1L << T__15) | (1L << T__16) | (1L << T__17))) != 0)) {
					{
					setState(246);
					assn();
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
		public TerminalNode CLASSID() { return getToken(KotlinParser.CLASSID, 0); }
		public AssnContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_assn; }
	}

	public final AssnContext assn() throws RecognitionException {
		AssnContext _localctx = new AssnContext(_ctx, getState());
		enterRule(_localctx, 36, RULE_assn);
		int _la;
		try {
			setState(268);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,19,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(251);
				substitutionOperator();
				setState(252);
				expr();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(254);
				match(T__9);
				setState(255);
				match(CLASSID);
				setState(256);
				match(T__4);
				setState(265);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (((((_la - 19)) & ~0x3f) == 0 && ((1L << (_la - 19)) & ((1L << (T__18 - 19)) | (1L << (T__20 - 19)) | (1L << (T__22 - 19)) | (1L << (T__23 - 19)) | (1L << (T__47 - 19)) | (1L << (T__48 - 19)) | (1L << (FUNCTIONID - 19)) | (1L << (ID - 19)) | (1L << (INT - 19)) | (1L << (REAL - 19)))) != 0)) {
					{
					setState(257);
					expr();
					setState(262);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==T__5) {
						{
						{
						setState(258);
						match(T__5);
						setState(259);
						expr();
						}
						}
						setState(264);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					}
				}

				setState(267);
				match(T__6);
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
		enterRule(_localctx, 38, RULE_substitutionOperator);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(270);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__9) | (1L << T__14) | (1L << T__15) | (1L << T__16) | (1L << T__17))) != 0)) ) {
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
		public ExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expression; }
	}

	public final ExpressionContext expression() throws RecognitionException {
		ExpressionContext _localctx = new ExpressionContext(_ctx, getState());
		enterRule(_localctx, 40, RULE_expression);
		try {
			setState(277);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__18:
				enterOuterAlt(_localctx, 1);
				{
				setState(272);
				ifExpr();
				}
				break;
			case T__20:
				enterOuterAlt(_localctx, 2);
				{
				setState(273);
				whenExpr();
				}
				break;
			case T__22:
			case T__23:
			case INT:
			case REAL:
				enterOuterAlt(_localctx, 3);
				{
				setState(274);
				literalConstant();
				}
				break;
			case ID:
				enterOuterAlt(_localctx, 4);
				{
				setState(275);
				match(ID);
				}
				break;
			case FUNCTIONID:
				enterOuterAlt(_localctx, 5);
				{
				setState(276);
				userFunc();
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

	public static class IfExprContext extends ParserRuleContext {
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public IfbodyContext ifbody() {
			return getRuleContext(IfbodyContext.class,0);
		}
		public ElseExprContext elseExpr() {
			return getRuleContext(ElseExprContext.class,0);
		}
		public IfExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ifExpr; }
	}

	public final IfExprContext ifExpr() throws RecognitionException {
		IfExprContext _localctx = new IfExprContext(_ctx, getState());
		enterRule(_localctx, 42, RULE_ifExpr);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(279);
			match(T__18);
			setState(280);
			match(T__4);
			setState(281);
			expr();
			setState(282);
			match(T__6);
			setState(283);
			ifbody();
			setState(285);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,21,_ctx) ) {
			case 1:
				{
				setState(284);
				elseExpr();
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

	public static class ElseExprContext extends ParserRuleContext {
		public IfExprContext ifExpr() {
			return getRuleContext(IfExprContext.class,0);
		}
		public IfbodyContext ifbody() {
			return getRuleContext(IfbodyContext.class,0);
		}
		public ElseExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_elseExpr; }
	}

	public final ElseExprContext elseExpr() throws RecognitionException {
		ElseExprContext _localctx = new ElseExprContext(_ctx, getState());
		enterRule(_localctx, 44, RULE_elseExpr);
		try {
			setState(291);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,22,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(287);
				match(T__19);
				setState(288);
				ifExpr();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(289);
				match(T__19);
				setState(290);
				ifbody();
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

	public static class IfbodyContext extends ParserRuleContext {
		public CodesContext codes() {
			return getRuleContext(CodesContext.class,0);
		}
		public CodeContext code() {
			return getRuleContext(CodeContext.class,0);
		}
		public IfbodyContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ifbody; }
	}

	public final IfbodyContext ifbody() throws RecognitionException {
		IfbodyContext _localctx = new IfbodyContext(_ctx, getState());
		enterRule(_localctx, 46, RULE_ifbody);
		try {
			setState(298);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__7:
				enterOuterAlt(_localctx, 1);
				{
				setState(293);
				match(T__7);
				setState(294);
				codes();
				setState(295);
				match(T__8);
				}
				break;
			case T__2:
			case T__10:
			case T__11:
			case T__12:
			case T__18:
			case T__20:
			case T__22:
			case T__23:
			case T__47:
			case T__48:
			case T__49:
			case T__52:
			case T__53:
			case T__54:
			case FUNCTIONID:
			case ID:
			case INT:
			case REAL:
				enterOuterAlt(_localctx, 2);
				{
				setState(297);
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
			setState(300);
			match(T__20);
			setState(301);
			match(T__4);
			setState(302);
			expr();
			setState(303);
			match(T__6);
			setState(304);
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
			setState(306);
			match(T__7);
			setState(307);
			expr();
			setState(308);
			match(T__21);
			setState(314);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__7:
				{
				setState(309);
				match(T__7);
				setState(310);
				codes();
				setState(311);
				match(T__8);
				}
				break;
			case T__2:
			case T__10:
			case T__11:
			case T__12:
			case T__18:
			case T__20:
			case T__22:
			case T__23:
			case T__47:
			case T__48:
			case T__49:
			case T__52:
			case T__53:
			case T__54:
			case FUNCTIONID:
			case ID:
			case INT:
			case REAL:
				{
				setState(313);
				code();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			setState(328);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==NEXTLINE) {
				{
				{
				setState(316);
				match(NEXTLINE);
				setState(317);
				expr();
				setState(318);
				match(T__21);
				setState(324);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case T__7:
					{
					setState(319);
					match(T__7);
					setState(320);
					codes();
					setState(321);
					match(T__8);
					}
					break;
				case T__2:
				case T__10:
				case T__11:
				case T__12:
				case T__18:
				case T__20:
				case T__22:
				case T__23:
				case T__47:
				case T__48:
				case T__49:
				case T__52:
				case T__53:
				case T__54:
				case FUNCTIONID:
				case ID:
				case INT:
				case REAL:
					{
					setState(323);
					code();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				}
				}
				setState(330);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(331);
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

	public static class LiteralConstantContext extends ParserRuleContext {
		public TerminalNode INT() { return getToken(KotlinParser.INT, 0); }
		public TerminalNode REAL() { return getToken(KotlinParser.REAL, 0); }
		public TerminalNode STRING() { return getToken(KotlinParser.STRING, 0); }
		public LiteralConstantContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_literalConstant; }
	}

	public final LiteralConstantContext literalConstant() throws RecognitionException {
		LiteralConstantContext _localctx = new LiteralConstantContext(_ctx, getState());
		enterRule(_localctx, 52, RULE_literalConstant);
		try {
			setState(339);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case INT:
				enterOuterAlt(_localctx, 1);
				{
				setState(333);
				match(INT);
				}
				break;
			case REAL:
				enterOuterAlt(_localctx, 2);
				{
				setState(334);
				match(REAL);
				}
				break;
			case T__22:
				enterOuterAlt(_localctx, 3);
				{
				setState(335);
				match(T__22);
				setState(336);
				match(STRING);
				setState(337);
				match(T__22);
				}
				break;
			case T__23:
				enterOuterAlt(_localctx, 4);
				{
				setState(338);
				match(T__23);
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
			setState(341);
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
			setState(343);
			andOper();
			setState(348);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,28,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(344);
					match(T__24);
					setState(345);
					andOper();
					}
					} 
				}
				setState(350);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,28,_ctx);
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
			setState(351);
			compare();
			setState(356);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,29,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(352);
					match(T__25);
					setState(353);
					compare();
					}
					} 
				}
				setState(358);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,29,_ctx);
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
			setState(359);
			infix();
			setState(365);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,30,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(360);
					compareOperator();
					setState(361);
					infix();
					}
					} 
				}
				setState(367);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,30,_ctx);
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
			setState(368);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__26) | (1L << T__27) | (1L << T__28) | (1L << T__29) | (1L << T__30) | (1L << T__31))) != 0)) ) {
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
		public InCheckContext inCheck() {
			return getRuleContext(InCheckContext.class,0);
		}
		public TypeCheckContext typeCheck() {
			return getRuleContext(TypeCheckContext.class,0);
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
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(370);
			list();
			setState(375);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__32) {
				{
				{
				setState(371);
				match(T__32);
				setState(372);
				listFunc();
				}
				}
				setState(377);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(380);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,32,_ctx) ) {
			case 1:
				{
				setState(378);
				inCheck();
				}
				break;
			case 2:
				{
				setState(379);
				typeCheck();
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
			setState(398);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__33:
				enterOuterAlt(_localctx, 1);
				{
				setState(382);
				match(T__33);
				setState(383);
				match(T__7);
				setState(384);
				filterBody();
				setState(385);
				match(T__8);
				}
				break;
			case T__34:
				enterOuterAlt(_localctx, 2);
				{
				setState(387);
				match(T__34);
				setState(388);
				match(T__7);
				setState(389);
				match(ID);
				setState(390);
				match(T__8);
				}
				break;
			case T__35:
				enterOuterAlt(_localctx, 3);
				{
				setState(391);
				match(T__35);
				setState(392);
				mapBody();
				}
				break;
			case T__36:
				enterOuterAlt(_localctx, 4);
				{
				setState(393);
				match(T__36);
				setState(394);
				match(T__7);
				setState(395);
				codes();
				setState(396);
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
			setState(400);
			match(T__37);
			setState(401);
			match(T__32);
			setState(402);
			match(T__38);
			setState(403);
			match(T__4);
			setState(404);
			expr();
			setState(405);
			match(T__6);
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
			setState(407);
			match(T__37);
			setState(408);
			match(T__32);
			setState(409);
			match(T__39);
			setState(410);
			match(T__4);
			setState(411);
			match(T__6);
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
			setState(413);
			typeCheckOperator();
			setState(414);
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
		public TerminalNode NOT() { return getToken(KotlinParser.NOT, 0); }
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
			setState(417);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==NOT) {
				{
				setState(416);
				match(NOT);
				}
			}

			setState(419);
			match(T__40);
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
		public CalculContext calcul() {
			return getRuleContext(CalculContext.class,0);
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
			setState(421);
			inCheckOperator();
			setState(422);
			calcul();
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
		public TerminalNode NOT() { return getToken(KotlinParser.NOT, 0); }
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
			setState(425);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==NOT) {
				{
				setState(424);
				match(NOT);
				}
			}

			setState(427);
			match(T__41);
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
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(429);
			calcul();
			setState(434);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__42) {
				{
				{
				setState(430);
				match(T__42);
				setState(431);
				calcul();
				}
				}
				setState(436);
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

	public static class CalculContext extends ParserRuleContext {
		public List<PrefixContext> prefix() {
			return getRuleContexts(PrefixContext.class);
		}
		public PrefixContext prefix(int i) {
			return getRuleContext(PrefixContext.class,i);
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
			setState(445);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,37,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(437);
				prefix();
				setState(438);
				_la = _input.LA(1);
				if ( !(_la==T__43 || _la==T__44) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(439);
				prefix();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(441);
				prefix();
				setState(442);
				_la = _input.LA(1);
				if ( !(_la==T__45 || _la==T__46) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(443);
				prefix();
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
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(450);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__47 || _la==T__48) {
				{
				{
				setState(447);
				prefixOperator();
				}
				}
				setState(452);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(453);
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
			setState(455);
			_la = _input.LA(1);
			if ( !(_la==T__47 || _la==T__48) ) {
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
			setState(457);
			expression();
			setState(461);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,39,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(458);
					postfixOperator();
					}
					} 
				}
				setState(463);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,39,_ctx);
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
		public TerminalNode DOTFUNC() { return getToken(KotlinParser.DOTFUNC, 0); }
		public PostfixOperatorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_postfixOperator; }
	}

	public final PostfixOperatorContext postfixOperator() throws RecognitionException {
		PostfixOperatorContext _localctx = new PostfixOperatorContext(_ctx, getState());
		enterRule(_localctx, 90, RULE_postfixOperator);
		try {
			setState(467);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__47:
			case T__48:
				enterOuterAlt(_localctx, 1);
				{
				setState(464);
				prefixOperator();
				}
				break;
			case T__32:
				enterOuterAlt(_localctx, 2);
				{
				setState(465);
				match(T__32);
				setState(466);
				match(DOTFUNC);
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
			setState(471);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__49:
				enterOuterAlt(_localctx, 1);
				{
				setState(469);
				forOper();
				}
				break;
			case T__52:
				enterOuterAlt(_localctx, 2);
				{
				setState(470);
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
		public InCheckContext inCheck() {
			return getRuleContext(InCheckContext.class,0);
		}
		public LoopBodyContext loopBody() {
			return getRuleContext(LoopBodyContext.class,0);
		}
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
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
			setState(494);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,42,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(473);
				match(T__49);
				setState(474);
				inCheck();
				setState(475);
				match(T__6);
				setState(476);
				loopBody();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(478);
				match(T__49);
				setState(479);
				inCheck();
				setState(480);
				match(T__50);
				setState(481);
				expr();
				setState(482);
				match(T__6);
				setState(483);
				loopBody();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(485);
				match(T__49);
				setState(486);
				inCheck();
				setState(487);
				match(T__51);
				setState(488);
				expr();
				setState(489);
				match(T__50);
				setState(490);
				expr();
				setState(491);
				match(T__6);
				setState(492);
				loopBody();
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
		public LoopBodyContext loopBody() {
			return getRuleContext(LoopBodyContext.class,0);
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
			setState(496);
			match(T__52);
			setState(497);
			expr();
			setState(498);
			match(T__6);
			setState(499);
			loopBody();
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

	public static class LoopBodyContext extends ParserRuleContext {
		public CodesContext codes() {
			return getRuleContext(CodesContext.class,0);
		}
		public CodeContext code() {
			return getRuleContext(CodeContext.class,0);
		}
		public LoopBodyContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_loopBody; }
	}

	public final LoopBodyContext loopBody() throws RecognitionException {
		LoopBodyContext _localctx = new LoopBodyContext(_ctx, getState());
		enterRule(_localctx, 98, RULE_loopBody);
		try {
			setState(506);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__7:
				enterOuterAlt(_localctx, 1);
				{
				setState(501);
				match(T__7);
				setState(502);
				codes();
				setState(503);
				match(T__8);
				}
				break;
			case T__2:
			case T__10:
			case T__11:
			case T__12:
			case T__18:
			case T__20:
			case T__22:
			case T__23:
			case T__47:
			case T__48:
			case T__49:
			case T__52:
			case T__53:
			case T__54:
			case FUNCTIONID:
			case ID:
			case INT:
			case REAL:
				enterOuterAlt(_localctx, 2);
				{
				setState(505);
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
			setState(510);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case FUNCTIONID:
				enterOuterAlt(_localctx, 1);
				{
				setState(508);
				userFunc();
				}
				break;
			case T__53:
			case T__54:
				enterOuterAlt(_localctx, 2);
				{
				setState(509);
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
		public TerminalNode FUNCTIONID() { return getToken(KotlinParser.FUNCTIONID, 0); }
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
			setState(512);
			match(FUNCTIONID);
			setState(513);
			match(T__4);
			setState(522);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (((((_la - 19)) & ~0x3f) == 0 && ((1L << (_la - 19)) & ((1L << (T__18 - 19)) | (1L << (T__20 - 19)) | (1L << (T__22 - 19)) | (1L << (T__23 - 19)) | (1L << (T__47 - 19)) | (1L << (T__48 - 19)) | (1L << (FUNCTIONID - 19)) | (1L << (ID - 19)) | (1L << (INT - 19)) | (1L << (REAL - 19)))) != 0)) {
				{
				setState(514);
				expr();
				setState(519);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==T__5) {
					{
					{
					setState(515);
					match(T__5);
					setState(516);
					expr();
					}
					}
					setState(521);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			setState(524);
			match(T__6);
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
			setState(536);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__53:
				enterOuterAlt(_localctx, 1);
				{
				setState(526);
				match(T__53);
				setState(527);
				match(T__4);
				setState(528);
				printText();
				setState(529);
				match(T__6);
				}
				break;
			case T__54:
				enterOuterAlt(_localctx, 2);
				{
				setState(531);
				match(T__54);
				setState(532);
				match(T__4);
				setState(533);
				printText();
				setState(534);
				match(T__6);
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
		public LiteralConstantContext literalConstant() {
			return getRuleContext(LiteralConstantContext.class,0);
		}
		public TerminalNode ID() { return getToken(KotlinParser.ID, 0); }
		public PrintTextContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_printText; }
	}

	public final PrintTextContext printText() throws RecognitionException {
		PrintTextContext _localctx = new PrintTextContext(_ctx, getState());
		enterRule(_localctx, 106, RULE_printText);
		try {
			setState(540);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__22:
			case T__23:
			case INT:
			case REAL:
				enterOuterAlt(_localctx, 1);
				{
				setState(538);
				literalConstant();
				}
				break;
			case ID:
				enterOuterAlt(_localctx, 2);
				{
				setState(539);
				match(ID);
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
			setState(545);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,49,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(542);
				nullableType();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(543);
				userType();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(544);
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
			setState(547);
			originalType();
			setState(548);
			match(T__55);
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
			setState(550);
			originalType();
			setState(552);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,50,_ctx) ) {
			case 1:
				{
				setState(551);
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
			setState(554);
			match(T__28);
			setState(555);
			type();
			setState(556);
			match(T__29);
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
			setState(558);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__56) | (1L << T__57) | (1L << T__58) | (1L << T__59) | (1L << T__60))) != 0)) ) {
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3J\u0233\4\2\t\2\4"+
		"\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t"+
		"\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \4!"+
		"\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\4+\t+\4"+
		",\t,\4-\t-\4.\t.\4/\t/\4\60\t\60\4\61\t\61\4\62\t\62\4\63\t\63\4\64\t"+
		"\64\4\65\t\65\4\66\t\66\4\67\t\67\48\t8\49\t9\4:\t:\4;\t;\4<\t<\3\2\6"+
		"\2z\n\2\r\2\16\2{\3\2\7\2\177\n\2\f\2\16\2\u0082\13\2\3\2\7\2\u0085\n"+
		"\2\f\2\16\2\u0088\13\2\3\2\3\2\3\3\3\3\3\3\3\3\3\4\3\4\3\4\3\4\3\5\3\5"+
		"\5\5\u0096\n\5\3\6\3\6\3\6\3\6\3\6\5\6\u009d\n\6\3\6\3\6\3\7\3\7\3\7\3"+
		"\7\7\7\u00a5\n\7\f\7\16\7\u00a8\13\7\5\7\u00aa\n\7\3\7\3\7\3\b\3\b\3\b"+
		"\3\b\3\t\3\t\5\t\u00b4\n\t\3\n\3\n\3\n\3\n\3\13\3\13\3\13\3\f\3\f\3\f"+
		"\3\f\3\f\5\f\u00c2\n\f\3\f\3\f\3\r\3\r\3\r\3\r\7\r\u00ca\n\r\f\r\16\r"+
		"\u00cd\13\r\5\r\u00cf\n\r\3\r\3\r\3\16\3\16\3\16\3\16\3\16\3\17\3\17\3"+
		"\17\3\20\3\20\3\20\3\20\3\21\3\21\3\21\7\21\u00e2\n\21\f\21\16\21\u00e5"+
		"\13\21\5\21\u00e7\n\21\3\22\3\22\3\22\3\22\3\22\3\22\5\22\u00ef\n\22\3"+
		"\23\3\23\3\23\3\23\3\23\3\23\5\23\u00f7\n\23\3\23\5\23\u00fa\n\23\5\23"+
		"\u00fc\n\23\3\24\3\24\3\24\3\24\3\24\3\24\3\24\3\24\3\24\7\24\u0107\n"+
		"\24\f\24\16\24\u010a\13\24\5\24\u010c\n\24\3\24\5\24\u010f\n\24\3\25\3"+
		"\25\3\26\3\26\3\26\3\26\3\26\5\26\u0118\n\26\3\27\3\27\3\27\3\27\3\27"+
		"\3\27\5\27\u0120\n\27\3\30\3\30\3\30\3\30\5\30\u0126\n\30\3\31\3\31\3"+
		"\31\3\31\3\31\5\31\u012d\n\31\3\32\3\32\3\32\3\32\3\32\3\32\3\33\3\33"+
		"\3\33\3\33\3\33\3\33\3\33\3\33\5\33\u013d\n\33\3\33\3\33\3\33\3\33\3\33"+
		"\3\33\3\33\3\33\5\33\u0147\n\33\7\33\u0149\n\33\f\33\16\33\u014c\13\33"+
		"\3\33\3\33\3\34\3\34\3\34\3\34\3\34\3\34\5\34\u0156\n\34\3\35\3\35\3\36"+
		"\3\36\3\36\7\36\u015d\n\36\f\36\16\36\u0160\13\36\3\37\3\37\3\37\7\37"+
		"\u0165\n\37\f\37\16\37\u0168\13\37\3 \3 \3 \3 \7 \u016e\n \f \16 \u0171"+
		"\13 \3!\3!\3\"\3\"\3\"\7\"\u0178\n\"\f\"\16\"\u017b\13\"\3\"\3\"\5\"\u017f"+
		"\n\"\3#\3#\3#\3#\3#\3#\3#\3#\3#\3#\3#\3#\3#\3#\3#\3#\5#\u0191\n#\3$\3"+
		"$\3$\3$\3$\3$\3$\3%\3%\3%\3%\3%\3%\3&\3&\3&\3\'\5\'\u01a4\n\'\3\'\3\'"+
		"\3(\3(\3(\3)\5)\u01ac\n)\3)\3)\3*\3*\3*\7*\u01b3\n*\f*\16*\u01b6\13*\3"+
		"+\3+\3+\3+\3+\3+\3+\3+\5+\u01c0\n+\3,\7,\u01c3\n,\f,\16,\u01c6\13,\3,"+
		"\3,\3-\3-\3.\3.\7.\u01ce\n.\f.\16.\u01d1\13.\3/\3/\3/\5/\u01d6\n/\3\60"+
		"\3\60\5\60\u01da\n\60\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61"+
		"\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\5\61\u01f1\n\61"+
		"\3\62\3\62\3\62\3\62\3\62\3\63\3\63\3\63\3\63\3\63\5\63\u01fd\n\63\3\64"+
		"\3\64\5\64\u0201\n\64\3\65\3\65\3\65\3\65\3\65\7\65\u0208\n\65\f\65\16"+
		"\65\u020b\13\65\5\65\u020d\n\65\3\65\3\65\3\66\3\66\3\66\3\66\3\66\3\66"+
		"\3\66\3\66\3\66\3\66\5\66\u021b\n\66\3\67\3\67\5\67\u021f\n\67\38\38\3"+
		"8\58\u0224\n8\39\39\39\3:\3:\5:\u022b\n:\3;\3;\3;\3;\3<\3<\3<\2\2=\2\4"+
		"\6\b\n\f\16\20\22\24\26\30\32\34\36 \"$&(*,.\60\62\64\668:<>@BDFHJLNP"+
		"RTVXZ\\^`bdfhjlnprtv\2\t\3\2\16\17\4\2\f\f\21\24\3\2\35\"\3\2./\3\2\60"+
		"\61\3\2\62\63\3\2;?\2\u0237\2y\3\2\2\2\4\u008b\3\2\2\2\6\u008f\3\2\2\2"+
		"\b\u0095\3\2\2\2\n\u0097\3\2\2\2\f\u00a0\3\2\2\2\16\u00ad\3\2\2\2\20\u00b3"+
		"\3\2\2\2\22\u00b5\3\2\2\2\24\u00b9\3\2\2\2\26\u00bc\3\2\2\2\30\u00c5\3"+
		"\2\2\2\32\u00d2\3\2\2\2\34\u00d7\3\2\2\2\36\u00da\3\2\2\2 \u00e6\3\2\2"+
		"\2\"\u00ee\3\2\2\2$\u00fb\3\2\2\2&\u010e\3\2\2\2(\u0110\3\2\2\2*\u0117"+
		"\3\2\2\2,\u0119\3\2\2\2.\u0125\3\2\2\2\60\u012c\3\2\2\2\62\u012e\3\2\2"+
		"\2\64\u0134\3\2\2\2\66\u0155\3\2\2\28\u0157\3\2\2\2:\u0159\3\2\2\2<\u0161"+
		"\3\2\2\2>\u0169\3\2\2\2@\u0172\3\2\2\2B\u0174\3\2\2\2D\u0190\3\2\2\2F"+
		"\u0192\3\2\2\2H\u0199\3\2\2\2J\u019f\3\2\2\2L\u01a3\3\2\2\2N\u01a7\3\2"+
		"\2\2P\u01ab\3\2\2\2R\u01af\3\2\2\2T\u01bf\3\2\2\2V\u01c4\3\2\2\2X\u01c9"+
		"\3\2\2\2Z\u01cb\3\2\2\2\\\u01d5\3\2\2\2^\u01d9\3\2\2\2`\u01f0\3\2\2\2"+
		"b\u01f2\3\2\2\2d\u01fc\3\2\2\2f\u0200\3\2\2\2h\u0202\3\2\2\2j\u021a\3"+
		"\2\2\2l\u021e\3\2\2\2n\u0223\3\2\2\2p\u0225\3\2\2\2r\u0228\3\2\2\2t\u022c"+
		"\3\2\2\2v\u0230\3\2\2\2xz\5\4\3\2yx\3\2\2\2z{\3\2\2\2{y\3\2\2\2{|\3\2"+
		"\2\2|\u0080\3\2\2\2}\177\5\6\4\2~}\3\2\2\2\177\u0082\3\2\2\2\u0080~\3"+
		"\2\2\2\u0080\u0081\3\2\2\2\u0081\u0086\3\2\2\2\u0082\u0080\3\2\2\2\u0083"+
		"\u0085\5\b\5\2\u0084\u0083\3\2\2\2\u0085\u0088\3\2\2\2\u0086\u0084\3\2"+
		"\2\2\u0086\u0087\3\2\2\2\u0087\u0089\3\2\2\2\u0088\u0086\3\2\2\2\u0089"+
		"\u008a\7\2\2\3\u008a\3\3\2\2\2\u008b\u008c\7\3\2\2\u008c\u008d\7@\2\2"+
		"\u008d\u008e\7F\2\2\u008e\5\3\2\2\2\u008f\u0090\7\4\2\2\u0090\u0091\7"+
		"A\2\2\u0091\u0092\7F\2\2\u0092\7\3\2\2\2\u0093\u0096\5\n\6\2\u0094\u0096"+
		"\5\26\f\2\u0095\u0093\3\2\2\2\u0095\u0094\3\2\2\2\u0096\t\3\2\2\2\u0097"+
		"\u0098\7\5\2\2\u0098\u0099\7B\2\2\u0099\u009c\5\f\7\2\u009a\u009b\7\6"+
		"\2\2\u009b\u009d\5n8\2\u009c\u009a\3\2\2\2\u009c\u009d\3\2\2\2\u009d\u009e"+
		"\3\2\2\2\u009e\u009f\5\20\t\2\u009f\13\3\2\2\2\u00a0\u00a9\7\7\2\2\u00a1"+
		"\u00a6\5\16\b\2\u00a2\u00a3\7\b\2\2\u00a3\u00a5\5\16\b\2\u00a4\u00a2\3"+
		"\2\2\2\u00a5\u00a8\3\2\2\2\u00a6\u00a4\3\2\2\2\u00a6\u00a7\3\2\2\2\u00a7"+
		"\u00aa\3\2\2\2\u00a8\u00a6\3\2\2\2\u00a9\u00a1\3\2\2\2\u00a9\u00aa\3\2"+
		"\2\2\u00aa\u00ab\3\2\2\2\u00ab\u00ac\7\t\2\2\u00ac\r\3\2\2\2\u00ad\u00ae"+
		"\7D\2\2\u00ae\u00af\7\6\2\2\u00af\u00b0\5n8\2\u00b0\17\3\2\2\2\u00b1\u00b4"+
		"\5\22\n\2\u00b2\u00b4\5\24\13\2\u00b3\u00b1\3\2\2\2\u00b3\u00b2\3\2\2"+
		"\2\u00b4\21\3\2\2\2\u00b5\u00b6\7\n\2\2\u00b6\u00b7\5 \21\2\u00b7\u00b8"+
		"\7\13\2\2\u00b8\23\3\2\2\2\u00b9\u00ba\7\f\2\2\u00ba\u00bb\5\"\22\2\u00bb"+
		"\25\3\2\2\2\u00bc\u00bd\7\r\2\2\u00bd\u00be\7C\2\2\u00be\u00c1\5\30\r"+
		"\2\u00bf\u00c0\7\6\2\2\u00c0\u00c2\5\34\17\2\u00c1\u00bf\3\2\2\2\u00c1"+
		"\u00c2\3\2\2\2\u00c2\u00c3\3\2\2\2\u00c3\u00c4\5\36\20\2\u00c4\27\3\2"+
		"\2\2\u00c5\u00ce\7\7\2\2\u00c6\u00cb\5\32\16\2\u00c7\u00c8\7\b\2\2\u00c8"+
		"\u00ca\5\32\16\2\u00c9\u00c7\3\2\2\2\u00ca\u00cd\3\2\2\2\u00cb\u00c9\3"+
		"\2\2\2\u00cb\u00cc\3\2\2\2\u00cc\u00cf\3\2\2\2\u00cd\u00cb\3\2\2\2\u00ce"+
		"\u00c6\3\2\2\2\u00ce\u00cf\3\2\2\2\u00cf\u00d0\3\2\2\2\u00d0\u00d1\7\t"+
		"\2\2\u00d1\31\3\2\2\2\u00d2\u00d3\t\2\2\2\u00d3\u00d4\7D\2\2\u00d4\u00d5"+
		"\7\6\2\2\u00d5\u00d6\5n8\2\u00d6\33\3\2\2\2\u00d7\u00d8\7C\2\2\u00d8\u00d9"+
		"\7\20\2\2\u00d9\35\3\2\2\2\u00da\u00db\7\n\2\2\u00db\u00dc\5 \21\2\u00dc"+
		"\u00dd\7\13\2\2\u00dd\37\3\2\2\2\u00de\u00e3\5\"\22\2\u00df\u00e0\7F\2"+
		"\2\u00e0\u00e2\5\"\22\2\u00e1\u00df\3\2\2\2\u00e2\u00e5\3\2\2\2\u00e3"+
		"\u00e1\3\2\2\2\u00e3\u00e4\3\2\2\2\u00e4\u00e7\3\2\2\2\u00e5\u00e3\3\2"+
		"\2\2\u00e6\u00de\3\2\2\2\u00e6\u00e7\3\2\2\2\u00e7!\3\2\2\2\u00e8\u00ef"+
		"\5\b\5\2\u00e9\u00ef\5$\23\2\u00ea\u00ef\5*\26\2\u00eb\u00ef\58\35\2\u00ec"+
		"\u00ef\5^\60\2\u00ed\u00ef\5f\64\2\u00ee\u00e8\3\2\2\2\u00ee\u00e9\3\2"+
		"\2\2\u00ee\u00ea\3\2\2\2\u00ee\u00eb\3\2\2\2\u00ee\u00ec\3\2\2\2\u00ee"+
		"\u00ed\3\2\2\2\u00ef#\3\2\2\2\u00f0\u00f1\7D\2\2\u00f1\u00fc\5&\24\2\u00f2"+
		"\u00f3\t\2\2\2\u00f3\u00f6\7D\2\2\u00f4\u00f5\7\6\2\2\u00f5\u00f7\5n8"+
		"\2\u00f6\u00f4\3\2\2\2\u00f6\u00f7\3\2\2\2\u00f7\u00f9\3\2\2\2\u00f8\u00fa"+
		"\5&\24\2\u00f9\u00f8\3\2\2\2\u00f9\u00fa\3\2\2\2\u00fa\u00fc\3\2\2\2\u00fb"+
		"\u00f0\3\2\2\2\u00fb\u00f2\3\2\2\2\u00fc%\3\2\2\2\u00fd\u00fe\5(\25\2"+
		"\u00fe\u00ff\58\35\2\u00ff\u010f\3\2\2\2\u0100\u0101\7\f\2\2\u0101\u0102"+
		"\7C\2\2\u0102\u010b\7\7\2\2\u0103\u0108\58\35\2\u0104\u0105\7\b\2\2\u0105"+
		"\u0107\58\35\2\u0106\u0104\3\2\2\2\u0107\u010a\3\2\2\2\u0108\u0106\3\2"+
		"\2\2\u0108\u0109\3\2\2\2\u0109\u010c\3\2\2\2\u010a\u0108\3\2\2\2\u010b"+
		"\u0103\3\2\2\2\u010b\u010c\3\2\2\2\u010c\u010d\3\2\2\2\u010d\u010f\7\t"+
		"\2\2\u010e\u00fd\3\2\2\2\u010e\u0100\3\2\2\2\u010f\'\3\2\2\2\u0110\u0111"+
		"\t\3\2\2\u0111)\3\2\2\2\u0112\u0118\5,\27\2\u0113\u0118\5\62\32\2\u0114"+
		"\u0118\5\66\34\2\u0115\u0118\7D\2\2\u0116\u0118\5h\65\2\u0117\u0112\3"+
		"\2\2\2\u0117\u0113\3\2\2\2\u0117\u0114\3\2\2\2\u0117\u0115\3\2\2\2\u0117"+
		"\u0116\3\2\2\2\u0118+\3\2\2\2\u0119\u011a\7\25\2\2\u011a\u011b\7\7\2\2"+
		"\u011b\u011c\58\35\2\u011c\u011d\7\t\2\2\u011d\u011f\5\60\31\2\u011e\u0120"+
		"\5.\30\2\u011f\u011e\3\2\2\2\u011f\u0120\3\2\2\2\u0120-\3\2\2\2\u0121"+
		"\u0122\7\26\2\2\u0122\u0126\5,\27\2\u0123\u0124\7\26\2\2\u0124\u0126\5"+
		"\60\31\2\u0125\u0121\3\2\2\2\u0125\u0123\3\2\2\2\u0126/\3\2\2\2\u0127"+
		"\u0128\7\n\2\2\u0128\u0129\5 \21\2\u0129\u012a\7\13\2\2\u012a\u012d\3"+
		"\2\2\2\u012b\u012d\5\"\22\2\u012c\u0127\3\2\2\2\u012c\u012b\3\2\2\2\u012d"+
		"\61\3\2\2\2\u012e\u012f\7\27\2\2\u012f\u0130\7\7\2\2\u0130\u0131\58\35"+
		"\2\u0131\u0132\7\t\2\2\u0132\u0133\5\64\33\2\u0133\63\3\2\2\2\u0134\u0135"+
		"\7\n\2\2\u0135\u0136\58\35\2\u0136\u013c\7\30\2\2\u0137\u0138\7\n\2\2"+
		"\u0138\u0139\5 \21\2\u0139\u013a\7\13\2\2\u013a\u013d\3\2\2\2\u013b\u013d"+
		"\5\"\22\2\u013c\u0137\3\2\2\2\u013c\u013b\3\2\2\2\u013d\u014a\3\2\2\2"+
		"\u013e\u013f\7F\2\2\u013f\u0140\58\35\2\u0140\u0146\7\30\2\2\u0141\u0142"+
		"\7\n\2\2\u0142\u0143\5 \21\2\u0143\u0144\7\13\2\2\u0144\u0147\3\2\2\2"+
		"\u0145\u0147\5\"\22\2\u0146\u0141\3\2\2\2\u0146\u0145\3\2\2\2\u0147\u0149"+
		"\3\2\2\2\u0148\u013e\3\2\2\2\u0149\u014c\3\2\2\2\u014a\u0148\3\2\2\2\u014a"+
		"\u014b\3\2\2\2\u014b\u014d\3\2\2\2\u014c\u014a\3\2\2\2\u014d\u014e\7\13"+
		"\2\2\u014e\65\3\2\2\2\u014f\u0156\7H\2\2\u0150\u0156\7I\2\2\u0151\u0152"+
		"\7\31\2\2\u0152\u0153\7J\2\2\u0153\u0156\7\31\2\2\u0154\u0156\7\32\2\2"+
		"\u0155\u014f\3\2\2\2\u0155\u0150\3\2\2\2\u0155\u0151\3\2\2\2\u0155\u0154"+
		"\3\2\2\2\u0156\67\3\2\2\2\u0157\u0158\5:\36\2\u01589\3\2\2\2\u0159\u015e"+
		"\5<\37\2\u015a\u015b\7\33\2\2\u015b\u015d\5<\37\2\u015c\u015a\3\2\2\2"+
		"\u015d\u0160\3\2\2\2\u015e\u015c\3\2\2\2\u015e\u015f\3\2\2\2\u015f;\3"+
		"\2\2\2\u0160\u015e\3\2\2\2\u0161\u0166\5> \2\u0162\u0163\7\34\2\2\u0163"+
		"\u0165\5> \2\u0164\u0162\3\2\2\2\u0165\u0168\3\2\2\2\u0166\u0164\3\2\2"+
		"\2\u0166\u0167\3\2\2\2\u0167=\3\2\2\2\u0168\u0166\3\2\2\2\u0169\u016f"+
		"\5B\"\2\u016a\u016b\5@!\2\u016b\u016c\5B\"\2\u016c\u016e\3\2\2\2\u016d"+
		"\u016a\3\2\2\2\u016e\u0171\3\2\2\2\u016f\u016d\3\2\2\2\u016f\u0170\3\2"+
		"\2\2\u0170?\3\2\2\2\u0171\u016f\3\2\2\2\u0172\u0173\t\4\2\2\u0173A\3\2"+
		"\2\2\u0174\u0179\5R*\2\u0175\u0176\7#\2\2\u0176\u0178\5D#\2\u0177\u0175"+
		"\3\2\2\2\u0178\u017b\3\2\2\2\u0179\u0177\3\2\2\2\u0179\u017a\3\2\2\2\u017a"+
		"\u017e\3\2\2\2\u017b\u0179\3\2\2\2\u017c\u017f\5N(\2\u017d\u017f\5J&\2"+
		"\u017e\u017c\3\2\2\2\u017e\u017d\3\2\2\2\u017fC\3\2\2\2\u0180\u0181\7"+
		"$\2\2\u0181\u0182\7\n\2\2\u0182\u0183\5F$\2\u0183\u0184\7\13\2\2\u0184"+
		"\u0191\3\2\2\2\u0185\u0186\7%\2\2\u0186\u0187\7\n\2\2\u0187\u0188\7D\2"+
		"\2\u0188\u0191\7\13\2\2\u0189\u018a\7&\2\2\u018a\u0191\5H%\2\u018b\u018c"+
		"\7\'\2\2\u018c\u018d\7\n\2\2\u018d\u018e\5 \21\2\u018e\u018f\7\13\2\2"+
		"\u018f\u0191\3\2\2\2\u0190\u0180\3\2\2\2\u0190\u0185\3\2\2\2\u0190\u0189"+
		"\3\2\2\2\u0190\u018b\3\2\2\2\u0191E\3\2\2\2\u0192\u0193\7(\2\2\u0193\u0194"+
		"\7#\2\2\u0194\u0195\7)\2\2\u0195\u0196\7\7\2\2\u0196\u0197\58\35\2\u0197"+
		"\u0198\7\t\2\2\u0198G\3\2\2\2\u0199\u019a\7(\2\2\u019a\u019b\7#\2\2\u019b"+
		"\u019c\7*\2\2\u019c\u019d\7\7\2\2\u019d\u019e\7\t\2\2\u019eI\3\2\2\2\u019f"+
		"\u01a0\5L\'\2\u01a0\u01a1\5n8\2\u01a1K\3\2\2\2\u01a2\u01a4\7G\2\2\u01a3"+
		"\u01a2\3\2\2\2\u01a3\u01a4\3\2\2\2\u01a4\u01a5\3\2\2\2\u01a5\u01a6\7+"+
		"\2\2\u01a6M\3\2\2\2\u01a7\u01a8\5P)\2\u01a8\u01a9\5T+\2\u01a9O\3\2\2\2"+
		"\u01aa\u01ac\7G\2\2\u01ab\u01aa\3\2\2\2\u01ab\u01ac\3\2\2\2\u01ac\u01ad"+
		"\3\2\2\2\u01ad\u01ae\7,\2\2\u01aeQ\3\2\2\2\u01af\u01b4\5T+\2\u01b0\u01b1"+
		"\7-\2\2\u01b1\u01b3\5T+\2\u01b2\u01b0\3\2\2\2\u01b3\u01b6\3\2\2\2\u01b4"+
		"\u01b2\3\2\2\2\u01b4\u01b5\3\2\2\2\u01b5S\3\2\2\2\u01b6\u01b4\3\2\2\2"+
		"\u01b7\u01b8\5V,\2\u01b8\u01b9\t\5\2\2\u01b9\u01ba\5V,\2\u01ba\u01c0\3"+
		"\2\2\2\u01bb\u01bc\5V,\2\u01bc\u01bd\t\6\2\2\u01bd\u01be\5V,\2\u01be\u01c0"+
		"\3\2\2\2\u01bf\u01b7\3\2\2\2\u01bf\u01bb\3\2\2\2\u01c0U\3\2\2\2\u01c1"+
		"\u01c3\5X-\2\u01c2\u01c1\3\2\2\2\u01c3\u01c6\3\2\2\2\u01c4\u01c2\3\2\2"+
		"\2\u01c4\u01c5\3\2\2\2\u01c5\u01c7\3\2\2\2\u01c6\u01c4\3\2\2\2\u01c7\u01c8"+
		"\5Z.\2\u01c8W\3\2\2\2\u01c9\u01ca\t\7\2\2\u01caY\3\2\2\2\u01cb\u01cf\5"+
		"*\26\2\u01cc\u01ce\5\\/\2\u01cd\u01cc\3\2\2\2\u01ce\u01d1\3\2\2\2\u01cf"+
		"\u01cd\3\2\2\2\u01cf\u01d0\3\2\2\2\u01d0[\3\2\2\2\u01d1\u01cf\3\2\2\2"+
		"\u01d2\u01d6\5X-\2\u01d3\u01d4\7#\2\2\u01d4\u01d6\7E\2\2\u01d5\u01d2\3"+
		"\2\2\2\u01d5\u01d3\3\2\2\2\u01d6]\3\2\2\2\u01d7\u01da\5`\61\2\u01d8\u01da"+
		"\5b\62\2\u01d9\u01d7\3\2\2\2\u01d9\u01d8\3\2\2\2\u01da_\3\2\2\2\u01db"+
		"\u01dc\7\64\2\2\u01dc\u01dd\5N(\2\u01dd\u01de\7\t\2\2\u01de\u01df\5d\63"+
		"\2\u01df\u01f1\3\2\2\2\u01e0\u01e1\7\64\2\2\u01e1\u01e2\5N(\2\u01e2\u01e3"+
		"\7\65\2\2\u01e3\u01e4\58\35\2\u01e4\u01e5\7\t\2\2\u01e5\u01e6\5d\63\2"+
		"\u01e6\u01f1\3\2\2\2\u01e7\u01e8\7\64\2\2\u01e8\u01e9\5N(\2\u01e9\u01ea"+
		"\7\66\2\2\u01ea\u01eb\58\35\2\u01eb\u01ec\7\65\2\2\u01ec\u01ed\58\35\2"+
		"\u01ed\u01ee\7\t\2\2\u01ee\u01ef\5d\63\2\u01ef\u01f1\3\2\2\2\u01f0\u01db"+
		"\3\2\2\2\u01f0\u01e0\3\2\2\2\u01f0\u01e7\3\2\2\2\u01f1a\3\2\2\2\u01f2"+
		"\u01f3\7\67\2\2\u01f3\u01f4\58\35\2\u01f4\u01f5\7\t\2\2\u01f5\u01f6\5"+
		"d\63\2\u01f6c\3\2\2\2\u01f7\u01f8\7\n\2\2\u01f8\u01f9\5 \21\2\u01f9\u01fa"+
		"\7\13\2\2\u01fa\u01fd\3\2\2\2\u01fb\u01fd\5\"\22\2\u01fc\u01f7\3\2\2\2"+
		"\u01fc\u01fb\3\2\2\2\u01fde\3\2\2\2\u01fe\u0201\5h\65\2\u01ff\u0201\5"+
		"j\66\2\u0200\u01fe\3\2\2\2\u0200\u01ff\3\2\2\2\u0201g\3\2\2\2\u0202\u0203"+
		"\7B\2\2\u0203\u020c\7\7\2\2\u0204\u0209\58\35\2\u0205\u0206\7\b\2\2\u0206"+
		"\u0208\58\35\2\u0207\u0205\3\2\2\2\u0208\u020b\3\2\2\2\u0209\u0207\3\2"+
		"\2\2\u0209\u020a\3\2\2\2\u020a\u020d\3\2\2\2\u020b\u0209\3\2\2\2\u020c"+
		"\u0204\3\2\2\2\u020c\u020d\3\2\2\2\u020d\u020e\3\2\2\2\u020e\u020f\7\t"+
		"\2\2\u020fi\3\2\2\2\u0210\u0211\78\2\2\u0211\u0212\7\7\2\2\u0212\u0213"+
		"\5l\67\2\u0213\u0214\7\t\2\2\u0214\u021b\3\2\2\2\u0215\u0216\79\2\2\u0216"+
		"\u0217\7\7\2\2\u0217\u0218\5l\67\2\u0218\u0219\7\t\2\2\u0219\u021b\3\2"+
		"\2\2\u021a\u0210\3\2\2\2\u021a\u0215\3\2\2\2\u021bk\3\2\2\2\u021c\u021f"+
		"\5\66\34\2\u021d\u021f\7D\2\2\u021e\u021c\3\2\2\2\u021e\u021d\3\2\2\2"+
		"\u021fm\3\2\2\2\u0220\u0224\5p9\2\u0221\u0224\5r:\2\u0222\u0224\5v<\2"+
		"\u0223\u0220\3\2\2\2\u0223\u0221\3\2\2\2\u0223\u0222\3\2\2\2\u0224o\3"+
		"\2\2\2\u0225\u0226\5v<\2\u0226\u0227\7:\2\2\u0227q\3\2\2\2\u0228\u022a"+
		"\5v<\2\u0229\u022b\5t;\2\u022a\u0229\3\2\2\2\u022a\u022b\3\2\2\2\u022b"+
		"s\3\2\2\2\u022c\u022d\7\37\2\2\u022d\u022e\5n8\2\u022e\u022f\7 \2\2\u022f"+
		"u\3\2\2\2\u0230\u0231\t\b\2\2\u0231w\3\2\2\2\65{\u0080\u0086\u0095\u009c"+
		"\u00a6\u00a9\u00b3\u00c1\u00cb\u00ce\u00e3\u00e6\u00ee\u00f6\u00f9\u00fb"+
		"\u0108\u010b\u010e\u0117\u011f\u0125\u012c\u013c\u0146\u014a\u0155\u015e"+
		"\u0166\u016f\u0179\u017e\u0190\u01a3\u01ab\u01b4\u01bf\u01c4\u01cf\u01d5"+
		"\u01d9\u01f0\u01fc\u0200\u0209\u020c\u021a\u021e\u0223\u022a";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}