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
		T__59=60, T__60=61, T__61=62, T__62=63, T__63=64, T__64=65, T__65=66, 
		T__66=67, Comment=68, ID=69, NEXTLINE=70, INT=71, REAL=72, STRING=73, 
		WS=74;
	public static final int
		RULE_kotlin = 0, RULE_package = 1, RULE_importList = 2, RULE_imports = 3, 
		RULE_declaration = 4, RULE_multiComment = 5, RULE_functionObject = 6, 
		RULE_functinParameters = 7, RULE_functinParameter = 8, RULE_functionBody = 9, 
		RULE_blockFunction = 10, RULE_simpleFunction = 11, RULE_funcReturn = 12, 
		RULE_classObject = 13, RULE_classParameters = 14, RULE_classParameter = 15, 
		RULE_inheritanceClass = 16, RULE_classBody = 17, RULE_codes = 18, RULE_code = 19, 
		RULE_variablesDeclare = 20, RULE_assn = 21, RULE_substitutionOperator = 22, 
		RULE_expression = 23, RULE_ifExpr = 24, RULE_whenExpr = 25, RULE_whenbody = 26, 
		RULE_literalConstant = 27, RULE_expr = 28, RULE_orOper = 29, RULE_andOper = 30, 
		RULE_compare = 31, RULE_compareOperator = 32, RULE_infix = 33, RULE_listFunc = 34, 
		RULE_filterBody = 35, RULE_mapBody = 36, RULE_typeCheck = 37, RULE_typeCheckOperator = 38, 
		RULE_inCheck = 39, RULE_inCheckOperator = 40, RULE_list = 41, RULE_calcul = 42, 
		RULE_prefix = 43, RULE_prefixOperator = 44, RULE_postfix = 45, RULE_postfixOperator = 46, 
		RULE_loop = 47, RULE_forOper = 48, RULE_whileOper = 49, RULE_body = 50, 
		RULE_useFunc = 51, RULE_userFunc = 52, RULE_print = 53, RULE_printText = 54, 
		RULE_type = 55, RULE_nullableType = 56, RULE_userType = 57, RULE_obType = 58, 
		RULE_originalType = 59;
	private static String[] makeRuleNames() {
		return new String[] {
			"kotlin", "package", "importList", "imports", "declaration", "multiComment", 
			"functionObject", "functinParameters", "functinParameter", "functionBody", 
			"blockFunction", "simpleFunction", "funcReturn", "classObject", "classParameters", 
			"classParameter", "inheritanceClass", "classBody", "codes", "code", "variablesDeclare", 
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
			null, "'package'", "'.'", "'import'", "'*'", "'/*'", "'*/'", "'fun'", 
			"':'", "'('", "','", "')'", "'{'", "'}'", "'='", "'return'", "'class'", 
			"'var'", "'val'", "'()'", "'+='", "'-='", "'*='", "'/='", "'if'", "'else'", 
			"'when'", "'->'", "'\"'", "'null'", "'||'", "'&&'", "'!='", "'=='", "'<'", 
			"'>'", "'<='", "'>='", "'.filter'", "'.sortedBy'", "'.map'", "'.forEach'", 
			"'it'", "'startWith'", "'uppercase'", "'!'", "'is'", "'in'", "'..'", 
			"'/'", "'+'", "'-'", "'++'", "'--'", "'for ('", "'step'", "'downTo'", 
			"'while ('", "'print'", "'println'", "'?'", "'Int'", "'Unit'", "'Real'", 
			"'String'", "'Array'", "'Double'", "'Any'"
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
			null, null, null, null, null, null, null, null, "Comment", "ID", "NEXTLINE", 
			"INT", "REAL", "STRING", "WS"
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
			setState(121);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__0) {
				{
				setState(120);
				package();
				}
			}

			setState(124);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,1,_ctx) ) {
			case 1:
				{
				setState(123);
				importList();
				}
				break;
			}
			setState(127); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(126);
				declaration();
				}
				}
				setState(129); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( _la==T__6 || _la==T__15 );
			setState(131);
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
			setState(133);
			match(T__0);
			setState(134);
			match(ID);
			setState(139);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__1) {
				{
				{
				setState(135);
				match(T__1);
				setState(136);
				match(ID);
				}
				}
				setState(141);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(145);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==NEXTLINE) {
				{
				{
				setState(142);
				match(NEXTLINE);
				}
				}
				setState(147);
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
			setState(151);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__2) {
				{
				{
				setState(148);
				imports();
				}
				}
				setState(153);
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
			setState(154);
			match(T__2);
			setState(155);
			match(ID);
			setState(160);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__1) {
				{
				{
				setState(156);
				match(T__1);
				setState(157);
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
				setState(162);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(166);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==NEXTLINE) {
				{
				{
				setState(163);
				match(NEXTLINE);
				}
				}
				setState(168);
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
			setState(183);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__6:
				enterOuterAlt(_localctx, 1);
				{
				setState(169);
				functionObject();
				setState(173);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,8,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(170);
						match(NEXTLINE);
						}
						} 
					}
					setState(175);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,8,_ctx);
				}
				}
				break;
			case T__15:
				enterOuterAlt(_localctx, 2);
				{
				setState(176);
				classObject();
				setState(180);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,9,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(177);
						match(NEXTLINE);
						}
						} 
					}
					setState(182);
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

	public static class MultiCommentContext extends ParserRuleContext {
		public List<MultiCommentContext> multiComment() {
			return getRuleContexts(MultiCommentContext.class);
		}
		public MultiCommentContext multiComment(int i) {
			return getRuleContext(MultiCommentContext.class,i);
		}
		public MultiCommentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_multiComment; }
	}

	public final MultiCommentContext multiComment() throws RecognitionException {
		MultiCommentContext _localctx = new MultiCommentContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_multiComment);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(185);
			match(T__4);
			setState(190);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,12,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					setState(188);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,11,_ctx) ) {
					case 1:
						{
						setState(186);
						multiComment();
						}
						break;
					case 2:
						{
						setState(187);
						matchWildcard();
						}
						break;
					}
					} 
				}
				setState(192);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,12,_ctx);
			}
			setState(193);
			match(T__5);
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
		enterRule(_localctx, 12, RULE_functionObject);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(195);
			match(T__6);
			setState(196);
			match(ID);
			setState(197);
			functinParameters();
			setState(200);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__7) {
				{
				setState(198);
				match(T__7);
				setState(199);
				type();
				}
			}

			setState(202);
			functionBody();
			setState(206);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,14,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(203);
					match(NEXTLINE);
					}
					} 
				}
				setState(208);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,14,_ctx);
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
		enterRule(_localctx, 14, RULE_functinParameters);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(209);
			match(T__8);
			setState(218);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==ID) {
				{
				setState(210);
				functinParameter();
				setState(215);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==T__9) {
					{
					{
					setState(211);
					match(T__9);
					setState(212);
					functinParameter();
					}
					}
					setState(217);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

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
		enterRule(_localctx, 16, RULE_functinParameter);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(222);
			match(ID);
			setState(223);
			match(T__7);
			setState(224);
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
		enterRule(_localctx, 18, RULE_functionBody);
		try {
			setState(228);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__11:
				enterOuterAlt(_localctx, 1);
				{
				setState(226);
				blockFunction();
				}
				break;
			case T__13:
				enterOuterAlt(_localctx, 2);
				{
				setState(227);
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
		enterRule(_localctx, 20, RULE_blockFunction);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(230);
			match(T__11);
			setState(231);
			codes();
			setState(232);
			match(T__12);
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
		enterRule(_localctx, 22, RULE_simpleFunction);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(234);
			match(T__13);
			setState(235);
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
		enterRule(_localctx, 24, RULE_funcReturn);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(237);
			match(T__14);
			setState(238);
			expr();
			setState(242);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,18,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(239);
					match(NEXTLINE);
					}
					} 
				}
				setState(244);
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
		enterRule(_localctx, 26, RULE_classObject);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(245);
			match(T__15);
			setState(246);
			match(ID);
			setState(247);
			classParameters();
			setState(250);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__7) {
				{
				setState(248);
				match(T__7);
				setState(249);
				inheritanceClass();
				}
			}

			setState(252);
			classBody();
			setState(256);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,20,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(253);
					match(NEXTLINE);
					}
					} 
				}
				setState(258);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,20,_ctx);
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
		enterRule(_localctx, 28, RULE_classParameters);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(259);
			match(T__8);
			setState(268);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__16 || _la==T__17) {
				{
				setState(260);
				classParameter();
				setState(265);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==T__9) {
					{
					{
					setState(261);
					match(T__9);
					setState(262);
					classParameter();
					}
					}
					setState(267);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

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
		enterRule(_localctx, 30, RULE_classParameter);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(272);
			_la = _input.LA(1);
			if ( !(_la==T__16 || _la==T__17) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(273);
			match(ID);
			setState(274);
			match(T__7);
			setState(275);
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
		enterRule(_localctx, 32, RULE_inheritanceClass);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(277);
			match(ID);
			setState(278);
			match(T__18);
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
		enterRule(_localctx, 34, RULE_classBody);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(280);
			match(T__11);
			setState(281);
			codes();
			setState(282);
			match(T__12);
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
		enterRule(_localctx, 36, RULE_codes);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(292);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,24,_ctx) ) {
			case 1:
				{
				setState(284);
				code();
				setState(289);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,23,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(285);
						match(NEXTLINE);
						setState(286);
						code();
						}
						} 
					}
					setState(291);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,23,_ctx);
				}
				}
				break;
			}
			setState(295);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==NEXTLINE) {
				{
				setState(294);
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
		enterRule(_localctx, 38, RULE_code);
		try {
			setState(303);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,26,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(297);
				loop();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(298);
				variablesDeclare();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(299);
				expression();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(300);
				expr();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(301);
				declaration();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(302);
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
		enterRule(_localctx, 40, RULE_variablesDeclare);
		int _la;
		try {
			setState(316);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__16:
			case T__17:
				enterOuterAlt(_localctx, 1);
				{
				setState(305);
				_la = _input.LA(1);
				if ( !(_la==T__16 || _la==T__17) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(306);
				match(ID);
				setState(309);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__7) {
					{
					setState(307);
					match(T__7);
					setState(308);
					type();
					}
				}

				setState(312);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__13) | (1L << T__19) | (1L << T__20) | (1L << T__21) | (1L << T__22))) != 0)) {
					{
					setState(311);
					assn();
					}
				}

				}
				break;
			case ID:
				enterOuterAlt(_localctx, 2);
				{
				setState(314);
				match(ID);
				setState(315);
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
		enterRule(_localctx, 42, RULE_assn);
		int _la;
		try {
			setState(335);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,32,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(318);
				substitutionOperator();
				setState(319);
				expr();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(321);
				match(T__13);
				setState(322);
				match(ID);
				setState(323);
				match(T__8);
				setState(332);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,31,_ctx) ) {
				case 1:
					{
					setState(324);
					expr();
					setState(329);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==T__9) {
						{
						{
						setState(325);
						match(T__9);
						setState(326);
						expr();
						}
						}
						setState(331);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					}
					break;
				}
				setState(334);
				match(T__10);
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
		enterRule(_localctx, 44, RULE_substitutionOperator);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(337);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__13) | (1L << T__19) | (1L << T__20) | (1L << T__21) | (1L << T__22))) != 0)) ) {
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
		enterRule(_localctx, 46, RULE_expression);
		int _la;
		try {
			setState(347);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,34,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(339);
				ifExpr();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(340);
				whenExpr();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(341);
				literalConstant();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(342);
				match(ID);
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(343);
				userFunc();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(345);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__14) {
					{
					setState(344);
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
		enterRule(_localctx, 48, RULE_ifExpr);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(349);
			match(T__23);
			setState(350);
			match(T__8);
			setState(351);
			expr();
			setState(352);
			match(T__10);
			setState(353);
			body();
			setState(357);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,35,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(354);
					match(NEXTLINE);
					}
					} 
				}
				setState(359);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,35,_ctx);
			}
			setState(362);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,36,_ctx) ) {
			case 1:
				{
				setState(360);
				match(T__24);
				setState(361);
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
		enterRule(_localctx, 50, RULE_whenExpr);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(364);
			match(T__25);
			setState(365);
			match(T__8);
			setState(366);
			expr();
			setState(367);
			match(T__10);
			setState(368);
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
		enterRule(_localctx, 52, RULE_whenbody);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(370);
			match(T__11);
			setState(371);
			expr();
			setState(372);
			match(T__26);
			setState(378);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__11:
				{
				setState(373);
				match(T__11);
				setState(374);
				codes();
				setState(375);
				match(T__12);
				}
				break;
			case T__1:
			case T__3:
			case T__6:
			case T__8:
			case T__12:
			case T__14:
			case T__15:
			case T__16:
			case T__17:
			case T__23:
			case T__25:
			case T__27:
			case T__28:
			case T__29:
			case T__30:
			case T__31:
			case T__32:
			case T__33:
			case T__34:
			case T__35:
			case T__36:
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
			case T__56:
			case T__57:
			case T__58:
			case ID:
			case NEXTLINE:
			case INT:
			case REAL:
				{
				setState(377);
				code();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			setState(392);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==NEXTLINE) {
				{
				{
				setState(380);
				match(NEXTLINE);
				setState(381);
				expr();
				setState(382);
				match(T__26);
				setState(388);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case T__11:
					{
					setState(383);
					match(T__11);
					setState(384);
					codes();
					setState(385);
					match(T__12);
					}
					break;
				case T__1:
				case T__3:
				case T__6:
				case T__8:
				case T__12:
				case T__14:
				case T__15:
				case T__16:
				case T__17:
				case T__23:
				case T__25:
				case T__27:
				case T__28:
				case T__29:
				case T__30:
				case T__31:
				case T__32:
				case T__33:
				case T__34:
				case T__35:
				case T__36:
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
				case T__56:
				case T__57:
				case T__58:
				case ID:
				case NEXTLINE:
				case INT:
				case REAL:
					{
					setState(387);
					code();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				}
				}
				setState(394);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(395);
			match(T__12);
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
		enterRule(_localctx, 54, RULE_literalConstant);
		int _la;
		try {
			setState(407);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case INT:
				enterOuterAlt(_localctx, 1);
				{
				setState(397);
				match(INT);
				}
				break;
			case REAL:
				enterOuterAlt(_localctx, 2);
				{
				setState(398);
				match(REAL);
				}
				break;
			case T__27:
				enterOuterAlt(_localctx, 3);
				{
				setState(399);
				match(T__27);
				setState(401); 
				_errHandler.sync(this);
				_la = _input.LA(1);
				do {
					{
					{
					setState(400);
					_la = _input.LA(1);
					if ( _la <= 0 || (_la==T__27) ) {
					_errHandler.recoverInline(this);
					}
					else {
						if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
						_errHandler.reportMatch(this);
						consume();
					}
					}
					}
					setState(403); 
					_errHandler.sync(this);
					_la = _input.LA(1);
				} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__0) | (1L << T__1) | (1L << T__2) | (1L << T__3) | (1L << T__4) | (1L << T__5) | (1L << T__6) | (1L << T__7) | (1L << T__8) | (1L << T__9) | (1L << T__10) | (1L << T__11) | (1L << T__12) | (1L << T__13) | (1L << T__14) | (1L << T__15) | (1L << T__16) | (1L << T__17) | (1L << T__18) | (1L << T__19) | (1L << T__20) | (1L << T__21) | (1L << T__22) | (1L << T__23) | (1L << T__24) | (1L << T__25) | (1L << T__26) | (1L << T__28) | (1L << T__29) | (1L << T__30) | (1L << T__31) | (1L << T__32) | (1L << T__33) | (1L << T__34) | (1L << T__35) | (1L << T__36) | (1L << T__37) | (1L << T__38) | (1L << T__39) | (1L << T__40) | (1L << T__41) | (1L << T__42) | (1L << T__43) | (1L << T__44) | (1L << T__45) | (1L << T__46) | (1L << T__47) | (1L << T__48) | (1L << T__49) | (1L << T__50) | (1L << T__51) | (1L << T__52) | (1L << T__53) | (1L << T__54) | (1L << T__55) | (1L << T__56) | (1L << T__57) | (1L << T__58) | (1L << T__59) | (1L << T__60) | (1L << T__61) | (1L << T__62))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (T__63 - 64)) | (1L << (T__64 - 64)) | (1L << (T__65 - 64)) | (1L << (T__66 - 64)) | (1L << (Comment - 64)) | (1L << (ID - 64)) | (1L << (NEXTLINE - 64)) | (1L << (INT - 64)) | (1L << (REAL - 64)) | (1L << (STRING - 64)) | (1L << (WS - 64)))) != 0) );
				setState(405);
				match(T__27);
				}
				break;
			case T__28:
				enterOuterAlt(_localctx, 4);
				{
				setState(406);
				match(T__28);
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
		enterRule(_localctx, 56, RULE_expr);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(409);
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
		enterRule(_localctx, 58, RULE_orOper);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(411);
			andOper();
			setState(416);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,42,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(412);
					match(T__29);
					setState(413);
					andOper();
					}
					} 
				}
				setState(418);
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
		enterRule(_localctx, 60, RULE_andOper);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(419);
			compare();
			setState(424);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,43,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(420);
					match(T__30);
					setState(421);
					compare();
					}
					} 
				}
				setState(426);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,43,_ctx);
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
		enterRule(_localctx, 62, RULE_compare);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(427);
			infix();
			setState(433);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,44,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(428);
					compareOperator();
					setState(429);
					infix();
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

	public static class CompareOperatorContext extends ParserRuleContext {
		public CompareOperatorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_compareOperator; }
	}

	public final CompareOperatorContext compareOperator() throws RecognitionException {
		CompareOperatorContext _localctx = new CompareOperatorContext(_ctx, getState());
		enterRule(_localctx, 64, RULE_compareOperator);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(436);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__31) | (1L << T__32) | (1L << T__33) | (1L << T__34) | (1L << T__35) | (1L << T__36))) != 0)) ) {
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
		enterRule(_localctx, 66, RULE_infix);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(438);
			list();
			setState(445);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,46,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					setState(443);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,45,_ctx) ) {
					case 1:
						{
						{
						setState(439);
						match(T__1);
						setState(440);
						listFunc();
						}
						}
						break;
					case 2:
						{
						setState(441);
						inCheck();
						}
						break;
					case 3:
						{
						setState(442);
						typeCheck();
						}
						break;
					}
					} 
				}
				setState(447);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,46,_ctx);
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
		enterRule(_localctx, 68, RULE_listFunc);
		try {
			setState(464);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__37:
				enterOuterAlt(_localctx, 1);
				{
				setState(448);
				match(T__37);
				setState(449);
				match(T__11);
				setState(450);
				filterBody();
				setState(451);
				match(T__12);
				}
				break;
			case T__38:
				enterOuterAlt(_localctx, 2);
				{
				setState(453);
				match(T__38);
				setState(454);
				match(T__11);
				setState(455);
				match(ID);
				setState(456);
				match(T__12);
				}
				break;
			case T__39:
				enterOuterAlt(_localctx, 3);
				{
				setState(457);
				match(T__39);
				setState(458);
				mapBody();
				}
				break;
			case T__40:
				enterOuterAlt(_localctx, 4);
				{
				setState(459);
				match(T__40);
				setState(460);
				match(T__11);
				setState(461);
				codes();
				setState(462);
				match(T__12);
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
		enterRule(_localctx, 70, RULE_filterBody);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(466);
			match(T__41);
			setState(467);
			match(T__1);
			setState(468);
			match(T__42);
			setState(469);
			match(T__8);
			setState(470);
			expr();
			setState(471);
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

	public static class MapBodyContext extends ParserRuleContext {
		public MapBodyContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_mapBody; }
	}

	public final MapBodyContext mapBody() throws RecognitionException {
		MapBodyContext _localctx = new MapBodyContext(_ctx, getState());
		enterRule(_localctx, 72, RULE_mapBody);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(473);
			match(T__41);
			setState(474);
			match(T__1);
			setState(475);
			match(T__43);
			setState(476);
			match(T__8);
			setState(477);
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
		enterRule(_localctx, 74, RULE_typeCheck);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(479);
			typeCheckOperator();
			setState(480);
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
		enterRule(_localctx, 76, RULE_typeCheckOperator);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(483);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__44) {
				{
				setState(482);
				match(T__44);
				}
			}

			setState(485);
			match(T__45);
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
		enterRule(_localctx, 78, RULE_inCheck);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(487);
			inCheckOperator();
			setState(488);
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
		enterRule(_localctx, 80, RULE_inCheckOperator);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(491);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__44) {
				{
				setState(490);
				match(T__44);
				}
			}

			setState(493);
			match(T__46);
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
		enterRule(_localctx, 82, RULE_list);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(495);
			calcul();
			setState(500);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,50,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(496);
					match(T__47);
					setState(497);
					calcul();
					}
					} 
				}
				setState(502);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,50,_ctx);
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
		enterRule(_localctx, 84, RULE_calcul);
		int _la;
		try {
			int _alt;
			setState(531);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,55,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(503);
				prefix();
				setState(508);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,51,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(504);
						_la = _input.LA(1);
						if ( !(_la==T__3 || _la==T__48) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(505);
						prefix();
						}
						} 
					}
					setState(510);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,51,_ctx);
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(511);
				prefix();
				setState(516);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,52,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(512);
						_la = _input.LA(1);
						if ( !(_la==T__49 || _la==T__50) ) {
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
					}
					setState(518);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,52,_ctx);
				}
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(519);
				match(T__8);
				setState(520);
				expr();
				setState(521);
				match(T__10);
				setState(528);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,54,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						setState(526);
						_errHandler.sync(this);
						switch (_input.LA(1)) {
						case T__3:
						case T__48:
							{
							{
							setState(522);
							_la = _input.LA(1);
							if ( !(_la==T__3 || _la==T__48) ) {
							_errHandler.recoverInline(this);
							}
							else {
								if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
								_errHandler.reportMatch(this);
								consume();
							}
							setState(523);
							prefix();
							}
							}
							break;
						case T__49:
						case T__50:
							{
							{
							setState(524);
							_la = _input.LA(1);
							if ( !(_la==T__49 || _la==T__50) ) {
							_errHandler.recoverInline(this);
							}
							else {
								if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
								_errHandler.reportMatch(this);
								consume();
							}
							setState(525);
							prefix();
							}
							}
							break;
						default:
							throw new NoViableAltException(this);
						}
						} 
					}
					setState(530);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,54,_ctx);
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
		enterRule(_localctx, 86, RULE_prefix);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(536);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,56,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(533);
					prefixOperator();
					}
					} 
				}
				setState(538);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,56,_ctx);
			}
			setState(539);
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
		enterRule(_localctx, 88, RULE_prefixOperator);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(541);
			_la = _input.LA(1);
			if ( !(_la==T__51 || _la==T__52) ) {
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
		enterRule(_localctx, 90, RULE_postfix);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(543);
			expression();
			setState(547);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,57,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(544);
					postfixOperator();
					}
					} 
				}
				setState(549);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,57,_ctx);
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
		enterRule(_localctx, 92, RULE_postfixOperator);
		int _la;
		try {
			setState(556);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__51:
			case T__52:
				enterOuterAlt(_localctx, 1);
				{
				setState(550);
				prefixOperator();
				}
				break;
			case T__1:
				enterOuterAlt(_localctx, 2);
				{
				setState(551);
				match(T__1);
				setState(552);
				match(ID);
				setState(554);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__18) {
					{
					setState(553);
					match(T__18);
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
		enterRule(_localctx, 94, RULE_loop);
		try {
			setState(560);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__53:
				enterOuterAlt(_localctx, 1);
				{
				setState(558);
				forOper();
				}
				break;
			case T__56:
				enterOuterAlt(_localctx, 2);
				{
				setState(559);
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
		enterRule(_localctx, 96, RULE_forOper);
		try {
			setState(583);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,61,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(562);
				match(T__53);
				setState(563);
				expr();
				setState(564);
				match(T__10);
				setState(565);
				body();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(567);
				match(T__53);
				setState(568);
				expr();
				setState(569);
				match(T__54);
				setState(570);
				expr();
				setState(571);
				match(T__10);
				setState(572);
				body();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(574);
				match(T__53);
				setState(575);
				expr();
				setState(576);
				match(T__55);
				setState(577);
				expr();
				setState(578);
				match(T__54);
				setState(579);
				expr();
				setState(580);
				match(T__10);
				setState(581);
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
		enterRule(_localctx, 98, RULE_whileOper);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(585);
			match(T__56);
			setState(586);
			expr();
			setState(587);
			match(T__10);
			setState(588);
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
		enterRule(_localctx, 100, RULE_body);
		try {
			setState(595);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__11:
				enterOuterAlt(_localctx, 1);
				{
				setState(590);
				match(T__11);
				setState(591);
				codes();
				setState(592);
				match(T__12);
				}
				break;
			case EOF:
			case T__1:
			case T__3:
			case T__6:
			case T__8:
			case T__9:
			case T__10:
			case T__12:
			case T__14:
			case T__15:
			case T__16:
			case T__17:
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
			case T__35:
			case T__36:
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
			case T__57:
			case T__58:
			case ID:
			case NEXTLINE:
			case INT:
			case REAL:
				enterOuterAlt(_localctx, 2);
				{
				setState(594);
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
		enterRule(_localctx, 102, RULE_useFunc);
		try {
			setState(599);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case ID:
				enterOuterAlt(_localctx, 1);
				{
				setState(597);
				userFunc();
				}
				break;
			case T__57:
			case T__58:
				enterOuterAlt(_localctx, 2);
				{
				setState(598);
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
		enterRule(_localctx, 104, RULE_userFunc);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(601);
			match(ID);
			setState(602);
			match(T__8);
			setState(611);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,65,_ctx) ) {
			case 1:
				{
				setState(603);
				expr();
				setState(608);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==T__9) {
					{
					{
					setState(604);
					match(T__9);
					setState(605);
					expr();
					}
					}
					setState(610);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			}
			setState(613);
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
		enterRule(_localctx, 106, RULE_print);
		try {
			setState(627);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__57:
				enterOuterAlt(_localctx, 1);
				{
				setState(615);
				match(T__57);
				setState(616);
				match(T__8);
				setState(618);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,66,_ctx) ) {
				case 1:
					{
					setState(617);
					printText();
					}
					break;
				}
				setState(620);
				match(T__10);
				}
				break;
			case T__58:
				enterOuterAlt(_localctx, 2);
				{
				setState(621);
				match(T__58);
				setState(622);
				match(T__8);
				setState(624);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,67,_ctx) ) {
				case 1:
					{
					setState(623);
					printText();
					}
					break;
				}
				setState(626);
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
		enterRule(_localctx, 108, RULE_printText);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(629);
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
		enterRule(_localctx, 110, RULE_type);
		try {
			setState(634);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,69,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(631);
				nullableType();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(632);
				userType();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(633);
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
		enterRule(_localctx, 112, RULE_nullableType);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(636);
			originalType();
			setState(637);
			match(T__59);
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
		enterRule(_localctx, 114, RULE_userType);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(639);
			originalType();
			setState(641);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,70,_ctx) ) {
			case 1:
				{
				setState(640);
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
		enterRule(_localctx, 116, RULE_obType);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(643);
			match(T__33);
			setState(644);
			type();
			setState(645);
			match(T__34);
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
		enterRule(_localctx, 118, RULE_originalType);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(647);
			_la = _input.LA(1);
			if ( !(((((_la - 61)) & ~0x3f) == 0 && ((1L << (_la - 61)) & ((1L << (T__60 - 61)) | (1L << (T__61 - 61)) | (1L << (T__62 - 61)) | (1L << (T__63 - 61)) | (1L << (T__64 - 61)) | (1L << (T__65 - 61)) | (1L << (T__66 - 61)))) != 0)) ) {
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3L\u028c\4\2\t\2\4"+
		"\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t"+
		"\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \4!"+
		"\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\4+\t+\4"+
		",\t,\4-\t-\4.\t.\4/\t/\4\60\t\60\4\61\t\61\4\62\t\62\4\63\t\63\4\64\t"+
		"\64\4\65\t\65\4\66\t\66\4\67\t\67\48\t8\49\t9\4:\t:\4;\t;\4<\t<\4=\t="+
		"\3\2\5\2|\n\2\3\2\5\2\177\n\2\3\2\6\2\u0082\n\2\r\2\16\2\u0083\3\2\3\2"+
		"\3\3\3\3\3\3\3\3\7\3\u008c\n\3\f\3\16\3\u008f\13\3\3\3\7\3\u0092\n\3\f"+
		"\3\16\3\u0095\13\3\3\4\7\4\u0098\n\4\f\4\16\4\u009b\13\4\3\5\3\5\3\5\3"+
		"\5\7\5\u00a1\n\5\f\5\16\5\u00a4\13\5\3\5\7\5\u00a7\n\5\f\5\16\5\u00aa"+
		"\13\5\3\6\3\6\7\6\u00ae\n\6\f\6\16\6\u00b1\13\6\3\6\3\6\7\6\u00b5\n\6"+
		"\f\6\16\6\u00b8\13\6\5\6\u00ba\n\6\3\7\3\7\3\7\7\7\u00bf\n\7\f\7\16\7"+
		"\u00c2\13\7\3\7\3\7\3\b\3\b\3\b\3\b\3\b\5\b\u00cb\n\b\3\b\3\b\7\b\u00cf"+
		"\n\b\f\b\16\b\u00d2\13\b\3\t\3\t\3\t\3\t\7\t\u00d8\n\t\f\t\16\t\u00db"+
		"\13\t\5\t\u00dd\n\t\3\t\3\t\3\n\3\n\3\n\3\n\3\13\3\13\5\13\u00e7\n\13"+
		"\3\f\3\f\3\f\3\f\3\r\3\r\3\r\3\16\3\16\3\16\7\16\u00f3\n\16\f\16\16\16"+
		"\u00f6\13\16\3\17\3\17\3\17\3\17\3\17\5\17\u00fd\n\17\3\17\3\17\7\17\u0101"+
		"\n\17\f\17\16\17\u0104\13\17\3\20\3\20\3\20\3\20\7\20\u010a\n\20\f\20"+
		"\16\20\u010d\13\20\5\20\u010f\n\20\3\20\3\20\3\21\3\21\3\21\3\21\3\21"+
		"\3\22\3\22\3\22\3\23\3\23\3\23\3\23\3\24\3\24\3\24\7\24\u0122\n\24\f\24"+
		"\16\24\u0125\13\24\5\24\u0127\n\24\3\24\5\24\u012a\n\24\3\25\3\25\3\25"+
		"\3\25\3\25\3\25\5\25\u0132\n\25\3\26\3\26\3\26\3\26\5\26\u0138\n\26\3"+
		"\26\5\26\u013b\n\26\3\26\3\26\5\26\u013f\n\26\3\27\3\27\3\27\3\27\3\27"+
		"\3\27\3\27\3\27\3\27\7\27\u014a\n\27\f\27\16\27\u014d\13\27\5\27\u014f"+
		"\n\27\3\27\5\27\u0152\n\27\3\30\3\30\3\31\3\31\3\31\3\31\3\31\3\31\5\31"+
		"\u015c\n\31\5\31\u015e\n\31\3\32\3\32\3\32\3\32\3\32\3\32\7\32\u0166\n"+
		"\32\f\32\16\32\u0169\13\32\3\32\3\32\5\32\u016d\n\32\3\33\3\33\3\33\3"+
		"\33\3\33\3\33\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\5\34\u017d\n\34"+
		"\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\5\34\u0187\n\34\7\34\u0189\n"+
		"\34\f\34\16\34\u018c\13\34\3\34\3\34\3\35\3\35\3\35\3\35\6\35\u0194\n"+
		"\35\r\35\16\35\u0195\3\35\3\35\5\35\u019a\n\35\3\36\3\36\3\37\3\37\3\37"+
		"\7\37\u01a1\n\37\f\37\16\37\u01a4\13\37\3 \3 \3 \7 \u01a9\n \f \16 \u01ac"+
		"\13 \3!\3!\3!\3!\7!\u01b2\n!\f!\16!\u01b5\13!\3\"\3\"\3#\3#\3#\3#\3#\7"+
		"#\u01be\n#\f#\16#\u01c1\13#\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$"+
		"\3$\3$\5$\u01d3\n$\3%\3%\3%\3%\3%\3%\3%\3&\3&\3&\3&\3&\3&\3\'\3\'\3\'"+
		"\3(\5(\u01e6\n(\3(\3(\3)\3)\3)\3*\5*\u01ee\n*\3*\3*\3+\3+\3+\7+\u01f5"+
		"\n+\f+\16+\u01f8\13+\3,\3,\3,\7,\u01fd\n,\f,\16,\u0200\13,\3,\3,\3,\7"+
		",\u0205\n,\f,\16,\u0208\13,\3,\3,\3,\3,\3,\3,\3,\7,\u0211\n,\f,\16,\u0214"+
		"\13,\5,\u0216\n,\3-\7-\u0219\n-\f-\16-\u021c\13-\3-\3-\3.\3.\3/\3/\7/"+
		"\u0224\n/\f/\16/\u0227\13/\3\60\3\60\3\60\3\60\5\60\u022d\n\60\5\60\u022f"+
		"\n\60\3\61\3\61\5\61\u0233\n\61\3\62\3\62\3\62\3\62\3\62\3\62\3\62\3\62"+
		"\3\62\3\62\3\62\3\62\3\62\3\62\3\62\3\62\3\62\3\62\3\62\3\62\3\62\5\62"+
		"\u024a\n\62\3\63\3\63\3\63\3\63\3\63\3\64\3\64\3\64\3\64\3\64\5\64\u0256"+
		"\n\64\3\65\3\65\5\65\u025a\n\65\3\66\3\66\3\66\3\66\3\66\7\66\u0261\n"+
		"\66\f\66\16\66\u0264\13\66\5\66\u0266\n\66\3\66\3\66\3\67\3\67\3\67\5"+
		"\67\u026d\n\67\3\67\3\67\3\67\3\67\5\67\u0273\n\67\3\67\5\67\u0276\n\67"+
		"\38\38\39\39\39\59\u027d\n9\3:\3:\3:\3;\3;\5;\u0284\n;\3<\3<\3<\3<\3="+
		"\3=\3=\2\2>\2\4\6\b\n\f\16\20\22\24\26\30\32\34\36 \"$&(*,.\60\62\64\66"+
		"8:<>@BDFHJLNPRTVXZ\\^`bdfhjlnprtvx\2\13\4\2\6\6GG\3\2\23\24\4\2\20\20"+
		"\26\31\3\2\36\36\3\2\"\'\4\2\6\6\63\63\3\2\64\65\3\2\66\67\3\2?E\2\u02a6"+
		"\2{\3\2\2\2\4\u0087\3\2\2\2\6\u0099\3\2\2\2\b\u009c\3\2\2\2\n\u00b9\3"+
		"\2\2\2\f\u00bb\3\2\2\2\16\u00c5\3\2\2\2\20\u00d3\3\2\2\2\22\u00e0\3\2"+
		"\2\2\24\u00e6\3\2\2\2\26\u00e8\3\2\2\2\30\u00ec\3\2\2\2\32\u00ef\3\2\2"+
		"\2\34\u00f7\3\2\2\2\36\u0105\3\2\2\2 \u0112\3\2\2\2\"\u0117\3\2\2\2$\u011a"+
		"\3\2\2\2&\u0126\3\2\2\2(\u0131\3\2\2\2*\u013e\3\2\2\2,\u0151\3\2\2\2."+
		"\u0153\3\2\2\2\60\u015d\3\2\2\2\62\u015f\3\2\2\2\64\u016e\3\2\2\2\66\u0174"+
		"\3\2\2\28\u0199\3\2\2\2:\u019b\3\2\2\2<\u019d\3\2\2\2>\u01a5\3\2\2\2@"+
		"\u01ad\3\2\2\2B\u01b6\3\2\2\2D\u01b8\3\2\2\2F\u01d2\3\2\2\2H\u01d4\3\2"+
		"\2\2J\u01db\3\2\2\2L\u01e1\3\2\2\2N\u01e5\3\2\2\2P\u01e9\3\2\2\2R\u01ed"+
		"\3\2\2\2T\u01f1\3\2\2\2V\u0215\3\2\2\2X\u021a\3\2\2\2Z\u021f\3\2\2\2\\"+
		"\u0221\3\2\2\2^\u022e\3\2\2\2`\u0232\3\2\2\2b\u0249\3\2\2\2d\u024b\3\2"+
		"\2\2f\u0255\3\2\2\2h\u0259\3\2\2\2j\u025b\3\2\2\2l\u0275\3\2\2\2n\u0277"+
		"\3\2\2\2p\u027c\3\2\2\2r\u027e\3\2\2\2t\u0281\3\2\2\2v\u0285\3\2\2\2x"+
		"\u0289\3\2\2\2z|\5\4\3\2{z\3\2\2\2{|\3\2\2\2|~\3\2\2\2}\177\5\6\4\2~}"+
		"\3\2\2\2~\177\3\2\2\2\177\u0081\3\2\2\2\u0080\u0082\5\n\6\2\u0081\u0080"+
		"\3\2\2\2\u0082\u0083\3\2\2\2\u0083\u0081\3\2\2\2\u0083\u0084\3\2\2\2\u0084"+
		"\u0085\3\2\2\2\u0085\u0086\7\2\2\3\u0086\3\3\2\2\2\u0087\u0088\7\3\2\2"+
		"\u0088\u008d\7G\2\2\u0089\u008a\7\4\2\2\u008a\u008c\7G\2\2\u008b\u0089"+
		"\3\2\2\2\u008c\u008f\3\2\2\2\u008d\u008b\3\2\2\2\u008d\u008e\3\2\2\2\u008e"+
		"\u0093\3\2\2\2\u008f\u008d\3\2\2\2\u0090\u0092\7H\2\2\u0091\u0090\3\2"+
		"\2\2\u0092\u0095\3\2\2\2\u0093\u0091\3\2\2\2\u0093\u0094\3\2\2\2\u0094"+
		"\5\3\2\2\2\u0095\u0093\3\2\2\2\u0096\u0098\5\b\5\2\u0097\u0096\3\2\2\2"+
		"\u0098\u009b\3\2\2\2\u0099\u0097\3\2\2\2\u0099\u009a\3\2\2\2\u009a\7\3"+
		"\2\2\2\u009b\u0099\3\2\2\2\u009c\u009d\7\5\2\2\u009d\u00a2\7G\2\2\u009e"+
		"\u009f\7\4\2\2\u009f\u00a1\t\2\2\2\u00a0\u009e\3\2\2\2\u00a1\u00a4\3\2"+
		"\2\2\u00a2\u00a0\3\2\2\2\u00a2\u00a3\3\2\2\2\u00a3\u00a8\3\2\2\2\u00a4"+
		"\u00a2\3\2\2\2\u00a5\u00a7\7H\2\2\u00a6\u00a5\3\2\2\2\u00a7\u00aa\3\2"+
		"\2\2\u00a8\u00a6\3\2\2\2\u00a8\u00a9\3\2\2\2\u00a9\t\3\2\2\2\u00aa\u00a8"+
		"\3\2\2\2\u00ab\u00af\5\16\b\2\u00ac\u00ae\7H\2\2\u00ad\u00ac\3\2\2\2\u00ae"+
		"\u00b1\3\2\2\2\u00af\u00ad\3\2\2\2\u00af\u00b0\3\2\2\2\u00b0\u00ba\3\2"+
		"\2\2\u00b1\u00af\3\2\2\2\u00b2\u00b6\5\34\17\2\u00b3\u00b5\7H\2\2\u00b4"+
		"\u00b3\3\2\2\2\u00b5\u00b8\3\2\2\2\u00b6\u00b4\3\2\2\2\u00b6\u00b7\3\2"+
		"\2\2\u00b7\u00ba\3\2\2\2\u00b8\u00b6\3\2\2\2\u00b9\u00ab\3\2\2\2\u00b9"+
		"\u00b2\3\2\2\2\u00ba\13\3\2\2\2\u00bb\u00c0\7\7\2\2\u00bc\u00bf\5\f\7"+
		"\2\u00bd\u00bf\13\2\2\2\u00be\u00bc\3\2\2\2\u00be\u00bd\3\2\2\2\u00bf"+
		"\u00c2\3\2\2\2\u00c0\u00be\3\2\2\2\u00c0\u00c1\3\2\2\2\u00c1\u00c3\3\2"+
		"\2\2\u00c2\u00c0\3\2\2\2\u00c3\u00c4\7\b\2\2\u00c4\r\3\2\2\2\u00c5\u00c6"+
		"\7\t\2\2\u00c6\u00c7\7G\2\2\u00c7\u00ca\5\20\t\2\u00c8\u00c9\7\n\2\2\u00c9"+
		"\u00cb\5p9\2\u00ca\u00c8\3\2\2\2\u00ca\u00cb\3\2\2\2\u00cb\u00cc\3\2\2"+
		"\2\u00cc\u00d0\5\24\13\2\u00cd\u00cf\7H\2\2\u00ce\u00cd\3\2\2\2\u00cf"+
		"\u00d2\3\2\2\2\u00d0\u00ce\3\2\2\2\u00d0\u00d1\3\2\2\2\u00d1\17\3\2\2"+
		"\2\u00d2\u00d0\3\2\2\2\u00d3\u00dc\7\13\2\2\u00d4\u00d9\5\22\n\2\u00d5"+
		"\u00d6\7\f\2\2\u00d6\u00d8\5\22\n\2\u00d7\u00d5\3\2\2\2\u00d8\u00db\3"+
		"\2\2\2\u00d9\u00d7\3\2\2\2\u00d9\u00da\3\2\2\2\u00da\u00dd\3\2\2\2\u00db"+
		"\u00d9\3\2\2\2\u00dc\u00d4\3\2\2\2\u00dc\u00dd\3\2\2\2\u00dd\u00de\3\2"+
		"\2\2\u00de\u00df\7\r\2\2\u00df\21\3\2\2\2\u00e0\u00e1\7G\2\2\u00e1\u00e2"+
		"\7\n\2\2\u00e2\u00e3\5p9\2\u00e3\23\3\2\2\2\u00e4\u00e7\5\26\f\2\u00e5"+
		"\u00e7\5\30\r\2\u00e6\u00e4\3\2\2\2\u00e6\u00e5\3\2\2\2\u00e7\25\3\2\2"+
		"\2\u00e8\u00e9\7\16\2\2\u00e9\u00ea\5&\24\2\u00ea\u00eb\7\17\2\2\u00eb"+
		"\27\3\2\2\2\u00ec\u00ed\7\20\2\2\u00ed\u00ee\5(\25\2\u00ee\31\3\2\2\2"+
		"\u00ef\u00f0\7\21\2\2\u00f0\u00f4\5:\36\2\u00f1\u00f3\7H\2\2\u00f2\u00f1"+
		"\3\2\2\2\u00f3\u00f6\3\2\2\2\u00f4\u00f2\3\2\2\2\u00f4\u00f5\3\2\2\2\u00f5"+
		"\33\3\2\2\2\u00f6\u00f4\3\2\2\2\u00f7\u00f8\7\22\2\2\u00f8\u00f9\7G\2"+
		"\2\u00f9\u00fc\5\36\20\2\u00fa\u00fb\7\n\2\2\u00fb\u00fd\5\"\22\2\u00fc"+
		"\u00fa\3\2\2\2\u00fc\u00fd\3\2\2\2\u00fd\u00fe\3\2\2\2\u00fe\u0102\5$"+
		"\23\2\u00ff\u0101\7H\2\2\u0100\u00ff\3\2\2\2\u0101\u0104\3\2\2\2\u0102"+
		"\u0100\3\2\2\2\u0102\u0103\3\2\2\2\u0103\35\3\2\2\2\u0104\u0102\3\2\2"+
		"\2\u0105\u010e\7\13\2\2\u0106\u010b\5 \21\2\u0107\u0108\7\f\2\2\u0108"+
		"\u010a\5 \21\2\u0109\u0107\3\2\2\2\u010a\u010d\3\2\2\2\u010b\u0109\3\2"+
		"\2\2\u010b\u010c\3\2\2\2\u010c\u010f\3\2\2\2\u010d\u010b\3\2\2\2\u010e"+
		"\u0106\3\2\2\2\u010e\u010f\3\2\2\2\u010f\u0110\3\2\2\2\u0110\u0111\7\r"+
		"\2\2\u0111\37\3\2\2\2\u0112\u0113\t\3\2\2\u0113\u0114\7G\2\2\u0114\u0115"+
		"\7\n\2\2\u0115\u0116\5p9\2\u0116!\3\2\2\2\u0117\u0118\7G\2\2\u0118\u0119"+
		"\7\25\2\2\u0119#\3\2\2\2\u011a\u011b\7\16\2\2\u011b\u011c\5&\24\2\u011c"+
		"\u011d\7\17\2\2\u011d%\3\2\2\2\u011e\u0123\5(\25\2\u011f\u0120\7H\2\2"+
		"\u0120\u0122\5(\25\2\u0121\u011f\3\2\2\2\u0122\u0125\3\2\2\2\u0123\u0121"+
		"\3\2\2\2\u0123\u0124\3\2\2\2\u0124\u0127\3\2\2\2\u0125\u0123\3\2\2\2\u0126"+
		"\u011e\3\2\2\2\u0126\u0127\3\2\2\2\u0127\u0129\3\2\2\2\u0128\u012a\7H"+
		"\2\2\u0129\u0128\3\2\2\2\u0129\u012a\3\2\2\2\u012a\'\3\2\2\2\u012b\u0132"+
		"\5`\61\2\u012c\u0132\5*\26\2\u012d\u0132\5\60\31\2\u012e\u0132\5:\36\2"+
		"\u012f\u0132\5\n\6\2\u0130\u0132\5h\65\2\u0131\u012b\3\2\2\2\u0131\u012c"+
		"\3\2\2\2\u0131\u012d\3\2\2\2\u0131\u012e\3\2\2\2\u0131\u012f\3\2\2\2\u0131"+
		"\u0130\3\2\2\2\u0132)\3\2\2\2\u0133\u0134\t\3\2\2\u0134\u0137\7G\2\2\u0135"+
		"\u0136\7\n\2\2\u0136\u0138\5p9\2\u0137\u0135\3\2\2\2\u0137\u0138\3\2\2"+
		"\2\u0138\u013a\3\2\2\2\u0139\u013b\5,\27\2\u013a\u0139\3\2\2\2\u013a\u013b"+
		"\3\2\2\2\u013b\u013f\3\2\2\2\u013c\u013d\7G\2\2\u013d\u013f\5,\27\2\u013e"+
		"\u0133\3\2\2\2\u013e\u013c\3\2\2\2\u013f+\3\2\2\2\u0140\u0141\5.\30\2"+
		"\u0141\u0142\5:\36\2\u0142\u0152\3\2\2\2\u0143\u0144\7\20\2\2\u0144\u0145"+
		"\7G\2\2\u0145\u014e\7\13\2\2\u0146\u014b\5:\36\2\u0147\u0148\7\f\2\2\u0148"+
		"\u014a\5:\36\2\u0149\u0147\3\2\2\2\u014a\u014d\3\2\2\2\u014b\u0149\3\2"+
		"\2\2\u014b\u014c\3\2\2\2\u014c\u014f\3\2\2\2\u014d\u014b\3\2\2\2\u014e"+
		"\u0146\3\2\2\2\u014e\u014f\3\2\2\2\u014f\u0150\3\2\2\2\u0150\u0152\7\r"+
		"\2\2\u0151\u0140\3\2\2\2\u0151\u0143\3\2\2\2\u0152-\3\2\2\2\u0153\u0154"+
		"\t\4\2\2\u0154/\3\2\2\2\u0155\u015e\5\62\32\2\u0156\u015e\5\64\33\2\u0157"+
		"\u015e\58\35\2\u0158\u015e\7G\2\2\u0159\u015e\5j\66\2\u015a\u015c\5\32"+
		"\16\2\u015b\u015a\3\2\2\2\u015b\u015c\3\2\2\2\u015c\u015e\3\2\2\2\u015d"+
		"\u0155\3\2\2\2\u015d\u0156\3\2\2\2\u015d\u0157\3\2\2\2\u015d\u0158\3\2"+
		"\2\2\u015d\u0159\3\2\2\2\u015d\u015b\3\2\2\2\u015e\61\3\2\2\2\u015f\u0160"+
		"\7\32\2\2\u0160\u0161\7\13\2\2\u0161\u0162\5:\36\2\u0162\u0163\7\r\2\2"+
		"\u0163\u0167\5f\64\2\u0164\u0166\7H\2\2\u0165\u0164\3\2\2\2\u0166\u0169"+
		"\3\2\2\2\u0167\u0165\3\2\2\2\u0167\u0168\3\2\2\2\u0168\u016c\3\2\2\2\u0169"+
		"\u0167\3\2\2\2\u016a\u016b\7\33\2\2\u016b\u016d\5f\64\2\u016c\u016a\3"+
		"\2\2\2\u016c\u016d\3\2\2\2\u016d\63\3\2\2\2\u016e\u016f\7\34\2\2\u016f"+
		"\u0170\7\13\2\2\u0170\u0171\5:\36\2\u0171\u0172\7\r\2\2\u0172\u0173\5"+
		"\66\34\2\u0173\65\3\2\2\2\u0174\u0175\7\16\2\2\u0175\u0176\5:\36\2\u0176"+
		"\u017c\7\35\2\2\u0177\u0178\7\16\2\2\u0178\u0179\5&\24\2\u0179\u017a\7"+
		"\17\2\2\u017a\u017d\3\2\2\2\u017b\u017d\5(\25\2\u017c\u0177\3\2\2\2\u017c"+
		"\u017b\3\2\2\2\u017d\u018a\3\2\2\2\u017e\u017f\7H\2\2\u017f\u0180\5:\36"+
		"\2\u0180\u0186\7\35\2\2\u0181\u0182\7\16\2\2\u0182\u0183\5&\24\2\u0183"+
		"\u0184\7\17\2\2\u0184\u0187\3\2\2\2\u0185\u0187\5(\25\2\u0186\u0181\3"+
		"\2\2\2\u0186\u0185\3\2\2\2\u0187\u0189\3\2\2\2\u0188\u017e\3\2\2\2\u0189"+
		"\u018c\3\2\2\2\u018a\u0188\3\2\2\2\u018a\u018b\3\2\2\2\u018b\u018d\3\2"+
		"\2\2\u018c\u018a\3\2\2\2\u018d\u018e\7\17\2\2\u018e\67\3\2\2\2\u018f\u019a"+
		"\7I\2\2\u0190\u019a\7J\2\2\u0191\u0193\7\36\2\2\u0192\u0194\n\5\2\2\u0193"+
		"\u0192\3\2\2\2\u0194\u0195\3\2\2\2\u0195\u0193\3\2\2\2\u0195\u0196\3\2"+
		"\2\2\u0196\u0197\3\2\2\2\u0197\u019a\7\36\2\2\u0198\u019a\7\37\2\2\u0199"+
		"\u018f\3\2\2\2\u0199\u0190\3\2\2\2\u0199\u0191\3\2\2\2\u0199\u0198\3\2"+
		"\2\2\u019a9\3\2\2\2\u019b\u019c\5<\37\2\u019c;\3\2\2\2\u019d\u01a2\5>"+
		" \2\u019e\u019f\7 \2\2\u019f\u01a1\5> \2\u01a0\u019e\3\2\2\2\u01a1\u01a4"+
		"\3\2\2\2\u01a2\u01a0\3\2\2\2\u01a2\u01a3\3\2\2\2\u01a3=\3\2\2\2\u01a4"+
		"\u01a2\3\2\2\2\u01a5\u01aa\5@!\2\u01a6\u01a7\7!\2\2\u01a7\u01a9\5@!\2"+
		"\u01a8\u01a6\3\2\2\2\u01a9\u01ac\3\2\2\2\u01aa\u01a8\3\2\2\2\u01aa\u01ab"+
		"\3\2\2\2\u01ab?\3\2\2\2\u01ac\u01aa\3\2\2\2\u01ad\u01b3\5D#\2\u01ae\u01af"+
		"\5B\"\2\u01af\u01b0\5D#\2\u01b0\u01b2\3\2\2\2\u01b1\u01ae\3\2\2\2\u01b2"+
		"\u01b5\3\2\2\2\u01b3\u01b1\3\2\2\2\u01b3\u01b4\3\2\2\2\u01b4A\3\2\2\2"+
		"\u01b5\u01b3\3\2\2\2\u01b6\u01b7\t\6\2\2\u01b7C\3\2\2\2\u01b8\u01bf\5"+
		"T+\2\u01b9\u01ba\7\4\2\2\u01ba\u01be\5F$\2\u01bb\u01be\5P)\2\u01bc\u01be"+
		"\5L\'\2\u01bd\u01b9\3\2\2\2\u01bd\u01bb\3\2\2\2\u01bd\u01bc\3\2\2\2\u01be"+
		"\u01c1\3\2\2\2\u01bf\u01bd\3\2\2\2\u01bf\u01c0\3\2\2\2\u01c0E\3\2\2\2"+
		"\u01c1\u01bf\3\2\2\2\u01c2\u01c3\7(\2\2\u01c3\u01c4\7\16\2\2\u01c4\u01c5"+
		"\5H%\2\u01c5\u01c6\7\17\2\2\u01c6\u01d3\3\2\2\2\u01c7\u01c8\7)\2\2\u01c8"+
		"\u01c9\7\16\2\2\u01c9\u01ca\7G\2\2\u01ca\u01d3\7\17\2\2\u01cb\u01cc\7"+
		"*\2\2\u01cc\u01d3\5J&\2\u01cd\u01ce\7+\2\2\u01ce\u01cf\7\16\2\2\u01cf"+
		"\u01d0\5&\24\2\u01d0\u01d1\7\17\2\2\u01d1\u01d3\3\2\2\2\u01d2\u01c2\3"+
		"\2\2\2\u01d2\u01c7\3\2\2\2\u01d2\u01cb\3\2\2\2\u01d2\u01cd\3\2\2\2\u01d3"+
		"G\3\2\2\2\u01d4\u01d5\7,\2\2\u01d5\u01d6\7\4\2\2\u01d6\u01d7\7-\2\2\u01d7"+
		"\u01d8\7\13\2\2\u01d8\u01d9\5:\36\2\u01d9\u01da\7\r\2\2\u01daI\3\2\2\2"+
		"\u01db\u01dc\7,\2\2\u01dc\u01dd\7\4\2\2\u01dd\u01de\7.\2\2\u01de\u01df"+
		"\7\13\2\2\u01df\u01e0\7\r\2\2\u01e0K\3\2\2\2\u01e1\u01e2\5N(\2\u01e2\u01e3"+
		"\5p9\2\u01e3M\3\2\2\2\u01e4\u01e6\7/\2\2\u01e5\u01e4\3\2\2\2\u01e5\u01e6"+
		"\3\2\2\2\u01e6\u01e7\3\2\2\2\u01e7\u01e8\7\60\2\2\u01e8O\3\2\2\2\u01e9"+
		"\u01ea\5R*\2\u01ea\u01eb\5:\36\2\u01ebQ\3\2\2\2\u01ec\u01ee\7/\2\2\u01ed"+
		"\u01ec\3\2\2\2\u01ed\u01ee\3\2\2\2\u01ee\u01ef\3\2\2\2\u01ef\u01f0\7\61"+
		"\2\2\u01f0S\3\2\2\2\u01f1\u01f6\5V,\2\u01f2\u01f3\7\62\2\2\u01f3\u01f5"+
		"\5V,\2\u01f4\u01f2\3\2\2\2\u01f5\u01f8\3\2\2\2\u01f6\u01f4\3\2\2\2\u01f6"+
		"\u01f7\3\2\2\2\u01f7U\3\2\2\2\u01f8\u01f6\3\2\2\2\u01f9\u01fe\5X-\2\u01fa"+
		"\u01fb\t\7\2\2\u01fb\u01fd\5X-\2\u01fc\u01fa\3\2\2\2\u01fd\u0200\3\2\2"+
		"\2\u01fe\u01fc\3\2\2\2\u01fe\u01ff\3\2\2\2\u01ff\u0216\3\2\2\2\u0200\u01fe"+
		"\3\2\2\2\u0201\u0206\5X-\2\u0202\u0203\t\b\2\2\u0203\u0205\5X-\2\u0204"+
		"\u0202\3\2\2\2\u0205\u0208\3\2\2\2\u0206\u0204\3\2\2\2\u0206\u0207\3\2"+
		"\2\2\u0207\u0216\3\2\2\2\u0208\u0206\3\2\2\2\u0209\u020a\7\13\2\2\u020a"+
		"\u020b\5:\36\2\u020b\u0212\7\r\2\2\u020c\u020d\t\7\2\2\u020d\u0211\5X"+
		"-\2\u020e\u020f\t\b\2\2\u020f\u0211\5X-\2\u0210\u020c\3\2\2\2\u0210\u020e"+
		"\3\2\2\2\u0211\u0214\3\2\2\2\u0212\u0210\3\2\2\2\u0212\u0213\3\2\2\2\u0213"+
		"\u0216\3\2\2\2\u0214\u0212\3\2\2\2\u0215\u01f9\3\2\2\2\u0215\u0201\3\2"+
		"\2\2\u0215\u0209\3\2\2\2\u0216W\3\2\2\2\u0217\u0219\5Z.\2\u0218\u0217"+
		"\3\2\2\2\u0219\u021c\3\2\2\2\u021a\u0218\3\2\2\2\u021a\u021b\3\2\2\2\u021b"+
		"\u021d\3\2\2\2\u021c\u021a\3\2\2\2\u021d\u021e\5\\/\2\u021eY\3\2\2\2\u021f"+
		"\u0220\t\t\2\2\u0220[\3\2\2\2\u0221\u0225\5\60\31\2\u0222\u0224\5^\60"+
		"\2\u0223\u0222\3\2\2\2\u0224\u0227\3\2\2\2\u0225\u0223\3\2\2\2\u0225\u0226"+
		"\3\2\2\2\u0226]\3\2\2\2\u0227\u0225\3\2\2\2\u0228\u022f\5Z.\2\u0229\u022a"+
		"\7\4\2\2\u022a\u022c\7G\2\2\u022b\u022d\7\25\2\2\u022c\u022b\3\2\2\2\u022c"+
		"\u022d\3\2\2\2\u022d\u022f\3\2\2\2\u022e\u0228\3\2\2\2\u022e\u0229\3\2"+
		"\2\2\u022f_\3\2\2\2\u0230\u0233\5b\62\2\u0231\u0233\5d\63\2\u0232\u0230"+
		"\3\2\2\2\u0232\u0231\3\2\2\2\u0233a\3\2\2\2\u0234\u0235\78\2\2\u0235\u0236"+
		"\5:\36\2\u0236\u0237\7\r\2\2\u0237\u0238\5f\64\2\u0238\u024a\3\2\2\2\u0239"+
		"\u023a\78\2\2\u023a\u023b\5:\36\2\u023b\u023c\79\2\2\u023c\u023d\5:\36"+
		"\2\u023d\u023e\7\r\2\2\u023e\u023f\5f\64\2\u023f\u024a\3\2\2\2\u0240\u0241"+
		"\78\2\2\u0241\u0242\5:\36\2\u0242\u0243\7:\2\2\u0243\u0244\5:\36\2\u0244"+
		"\u0245\79\2\2\u0245\u0246\5:\36\2\u0246\u0247\7\r\2\2\u0247\u0248\5f\64"+
		"\2\u0248\u024a\3\2\2\2\u0249\u0234\3\2\2\2\u0249\u0239\3\2\2\2\u0249\u0240"+
		"\3\2\2\2\u024ac\3\2\2\2\u024b\u024c\7;\2\2\u024c\u024d\5:\36\2\u024d\u024e"+
		"\7\r\2\2\u024e\u024f\5f\64\2\u024fe\3\2\2\2\u0250\u0251\7\16\2\2\u0251"+
		"\u0252\5&\24\2\u0252\u0253\7\17\2\2\u0253\u0256\3\2\2\2\u0254\u0256\5"+
		"(\25\2\u0255\u0250\3\2\2\2\u0255\u0254\3\2\2\2\u0256g\3\2\2\2\u0257\u025a"+
		"\5j\66\2\u0258\u025a\5l\67\2\u0259\u0257\3\2\2\2\u0259\u0258\3\2\2\2\u025a"+
		"i\3\2\2\2\u025b\u025c\7G\2\2\u025c\u0265\7\13\2\2\u025d\u0262\5:\36\2"+
		"\u025e\u025f\7\f\2\2\u025f\u0261\5:\36\2\u0260\u025e\3\2\2\2\u0261\u0264"+
		"\3\2\2\2\u0262\u0260\3\2\2\2\u0262\u0263\3\2\2\2\u0263\u0266\3\2\2\2\u0264"+
		"\u0262\3\2\2\2\u0265\u025d\3\2\2\2\u0265\u0266\3\2\2\2\u0266\u0267\3\2"+
		"\2\2\u0267\u0268\7\r\2\2\u0268k\3\2\2\2\u0269\u026a\7<\2\2\u026a\u026c"+
		"\7\13\2\2\u026b\u026d\5n8\2\u026c\u026b\3\2\2\2\u026c\u026d\3\2\2\2\u026d"+
		"\u026e\3\2\2\2\u026e\u0276\7\r\2\2\u026f\u0270\7=\2\2\u0270\u0272\7\13"+
		"\2\2\u0271\u0273\5n8\2\u0272\u0271\3\2\2\2\u0272\u0273\3\2\2\2\u0273\u0274"+
		"\3\2\2\2\u0274\u0276\7\r\2\2\u0275\u0269\3\2\2\2\u0275\u026f\3\2\2\2\u0276"+
		"m\3\2\2\2\u0277\u0278\5:\36\2\u0278o\3\2\2\2\u0279\u027d\5r:\2\u027a\u027d"+
		"\5t;\2\u027b\u027d\5x=\2\u027c\u0279\3\2\2\2\u027c\u027a\3\2\2\2\u027c"+
		"\u027b\3\2\2\2\u027dq\3\2\2\2\u027e\u027f\5x=\2\u027f\u0280\7>\2\2\u0280"+
		"s\3\2\2\2\u0281\u0283\5x=\2\u0282\u0284\5v<\2\u0283\u0282\3\2\2\2\u0283"+
		"\u0284\3\2\2\2\u0284u\3\2\2\2\u0285\u0286\7$\2\2\u0286\u0287\5p9\2\u0287"+
		"\u0288\7%\2\2\u0288w\3\2\2\2\u0289\u028a\t\n\2\2\u028ay\3\2\2\2I{~\u0083"+
		"\u008d\u0093\u0099\u00a2\u00a8\u00af\u00b6\u00b9\u00be\u00c0\u00ca\u00d0"+
		"\u00d9\u00dc\u00e6\u00f4\u00fc\u0102\u010b\u010e\u0123\u0126\u0129\u0131"+
		"\u0137\u013a\u013e\u014b\u014e\u0151\u015b\u015d\u0167\u016c\u017c\u0186"+
		"\u018a\u0195\u0199\u01a2\u01aa\u01b3\u01bd\u01bf\u01d2\u01e5\u01ed\u01f6"+
		"\u01fe\u0206\u0210\u0212\u0215\u021a\u0225\u022c\u022e\u0232\u0249\u0255"+
		"\u0259\u0262\u0265\u026c\u0272\u0275\u027c\u0283";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}