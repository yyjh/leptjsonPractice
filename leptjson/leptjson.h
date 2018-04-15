#ifdef __LEPTJSON__
#define __LEPTJSON__

typedef enum
{
	LEPT_NULL,
	LEPT_FALSE,
	LEPT_TRUE,
	LEPT_NUMBER,
	LEPT_STRING,
	LEPT_ARRAY,
	LEPT_OBJECT
} leptType;

typedef struct {
	leptType type;
} leptValue;

enum {
	LEPT_PARSE_OK,
	LEPT_PARSE_EXPECT_VALUE,
	LEPT_PARSE_INVALID_VALUE,
	LEPT_PARSE_ROOT_NOT_SINGULAR
};

int leptParse(leptValue * v, const char *json);
leptType leptGetType(cosnt leptValue *v);

#endif /* __LEPTJSON__ */
