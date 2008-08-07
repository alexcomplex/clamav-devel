#ifndef CHECKS_H
#define CHECKS_H
Suite *test_jsnorm_suite(void);
Suite *test_str_suite(void);
Suite *test_regex_suite(void);
Suite *test_disasm_suite(void);
Suite *test_uniq_suite(void);
Suite *test_matchers_suite(void);
void errmsg_expected(void);
int open_testfile(const char *name);
#endif
