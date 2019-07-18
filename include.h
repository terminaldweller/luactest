

#define __maybe_unused__ __attribute__((unused))
#define NELEMS(x) (sizeof(x)/sizeof(x[0]))

typedef struct{
  size_t begin;
  size_t end;
}word_pos_t;

char *LUA_FUNCS[] = {
  "_G",
  "_VERSION",
  "assert",
  "collectgarbage",
  "dofile",
  "error",
  "getmetatable",
  "ipairs",
  "load",
  "loadfile",
  "next",
  "pairs",
  "pcall",
  "print",
  "rawequal",
  "rawget",
  "rawlen",
  "rawset",
  "require",
  "select",
  "setmetatable",
  "tonumber",
  "tostring",
  "type",
  "xpcall",
  "coroutine",
  "coroutine.create",
  "coroutine.isyieldable",
  "coroutine.resume",
  "coroutine.running",
  "coroutine.status",
  "coroutine.wrap",
  "coroutine.yield",
  "debug",
  "debug.debug",
  "debug.gethook",
  "debug.getinfo",
  "debug.getlocal",
  "debug.getmetatable",
  "debug.getregistry",
  "debug.getupvalue",
  "debug.getuservalue",
  "debug.sethook",
  "debug.setlocal",
  "debug.setmetatable",
  "debug.setupvalue",
  "debug.setuservalue",
  "debug.traceback",
  "debug.upvalueid",
  "debug.upvaluejoin",
  "io",
  "io.close",
  "io.flush",
  "io.input",
  "io.lines",
  "io.open",
  "io.output",
  "io.popen",
  "io.read",
  "io.stderr",
  "io.stdin",
  "io.stdout",
  "io.tmpfile",
  "io.type",
  "io.write",
  "file:close",
  "file:flush",
  "file:lines",
  "file:read",
  "file:seek",
  "file:setvbuf",
  "file:write",
  "math",
  "math.abs",
  "math.acos",
  "math.asin",
  "math.atan",
  "math.ceil",
  "math.cos",
  "math.deg",
  "math.exp",
  "math.floor",
  "math.fmod",
  "math.huge",
  "math.log",
  "math.max",
  "math.maxinteger",
  "math.min",
  "math.mininteger",
  "math.modf",
  "math.pi",
  "math.rad",
  "math.random",
  "math.randomseed",
  "math.sin",
  "math.sqrt",
  "math.tan",
  "math.tointeger",
  "math.type",
  "math.ult",
  "os",
  "os.clock",
  "os.date",
  "os.difftime",
  "os.execute",
  "os.exit",
  "os.getenv",
  "os.remove",
  "os.rename",
  "os.setlocale",
  "os.time",
  "os.tmpname",
  "package",
  "package.config",
  "package.cpath",
  "package.loaded",
  "package.loadlib",
  "package.path",
  "package.preload",
  "package.searchers",
  "package.searchpath",
  "string",
  "string.byte",
  "string.char",
  "string.dump",
  "string.find",
  "string.format",
  "string.gmatch",
  "string.gsub",
  "string.len",
  "string.lower",
  "string.match",
  "string.pack",
  "string.packsize",
  "string.rep",
  "string.reverse",
  "string.sub",
  "string.unpack",
  "string.upper",
  "table",
  "table.concat",
  "table.insert",
  "table.move",
  "table.pack",
  "table.remove",
  "table.sort",
  "table.unpack",
  "utf8",
  "utf8.char",
  "utf8.charpattern",
  "utf8.codepoint",
  "utf8.codes",
  "utf8.len",
  "utf8.offset",
  "LUA_CPATH",
  "LUA_CPATH_5_3",
  "LUA_INIT",
  "LUA_INIT_5_3",
  "LUA_PATH",
  "LUA_PATH_5_3",
  "and",
  "break",
  "do",
  "else",
  "elseif",
  "end",
  "false",
  "for",
  "function",
  "if",
  "in",
  "local",
  "nil",
  "not",
  "or",
  "repeat",
  "return",
  "then",
  "true",
  "until",
  "while"
};

char ID_BREAKERS[] = {'{','}','[',']','(',')','+','=','-','.','*','/','\t',' ','.','<','>','|','?','&', '"', '\''};
