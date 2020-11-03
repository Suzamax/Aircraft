#ifndef CONFIG_H_IN
#define CONFIG_H_IN

#include <string>

namespace projectdefinitions {
    static std::string getProjectName() {
        return "Aircraft";
    }

    static std::string getProjectVersion() {
        return "0.1";
    }

    static std::string getApplicationID() {
        return "one.suzamax.Aircraft";
    }

    static std::string getApplicationPrefix() {
        return "/one/suzamax/Aircraft/";
    }

    static std::string getGeneratedFilesDirectory() {
        return "/home/carlos/Proyectos/Aircraft/cmake-build-debug/generated";
    }

    static std::string getGeneratedDataDirectory() {
        return "/home/carlos/Proyectos/Aircraft/cmake-build-debug/generated/data";
    }
}

#endif  // CONFIG_H_IN
