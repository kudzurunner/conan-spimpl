from conans import ConanFile, CMake, tools


class SpimplConan(ConanFile):
    name = "spimpl"
    version = "1.2"
    license = "http://www.boost.org/LICENSE_1_0.txt"
    author = "KudzuRunner"
    url = "https://github.com/kudzurunner/conan-spimpl"
    description = "A Smart Pointer to IMPLementation (i.e. Smart PIMPL or just SPIMPL)"
    settings = "os", "compiler", "build_type", "arch"
    git_hash = "ba1b834"

    def configure(self):
        self.settings.clear()

    def source(self):
        git = tools.Git(folder=self.name)
        git.clone("https://github.com/oliora/samples.git", branch="master")
        git.checkout(self.git_hash)

    def package(self):
        self.copy("*.h", "include")

    def package_info(self):
        self.info.header_only()
