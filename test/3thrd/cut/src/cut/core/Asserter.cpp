#include "cut/core/Asserter.h"

CUT_NS_BEGIN

void assert_that(const std::basic_string<char>& actual, cum::Matcher<const char*>* matcher, const std::string& source)
{
    __SCOPE_EXIT__([ = ] { delete matcher; });

    if (!matcher->matches(actual.c_str())) {
        cum::Description desc;
        desc.appendText("\nExpected: ")
            .appendDescriptionOf(*matcher)
            .appendText("\n but: ");

        matcher->describeMismatch(actual.c_str(), desc);

        throw AssertionError(source, desc.to_s());
    }
}

CUT_NS_END