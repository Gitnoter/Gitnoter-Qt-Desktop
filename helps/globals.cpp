#include "globals.h"
#include "tools.h"

#include <QStandardPaths>

const QString gPackageName = "com.huyaohui.gitnoter";
const QString gDateFormat = "yyyy/MM/dd hh:mm";
const QString gTagSplit = ", ";
const int gSevenDays = 7 * 24 * 60 * 60;

const QString gAppDataLocation = QDir(
        QStandardPaths::writableLocation(QStandardPaths::AppDataLocation)).filePath(gPackageName);
const QString gAppDataPath = QDir(gAppDataLocation).filePath("data/");
const QString appConfigPath = QDir(gAppDataPath).filePath("appconfig.json");
const QString gRepoPath = QDir(gAppDataLocation).filePath("user/user.git");
const QString gRepoNoteTextPath = QDir(gRepoPath).filePath("notes/");
const QString gNoteTextFileName = "markdown.md";
const QString gNoteDataFileName = "data.json";
const QString gRepoNoteDataPath = QDir(gRepoPath).filePath("data");
const QString gRepoCategoryListPath = QDir(gRepoNoteDataPath).filePath("categories.list");
const QString gRepoTagListPath = QDir(gRepoNoteDataPath).filePath("tags.list");

const QString gNewNoteKeySequence = "Ctrl+N";
const QString gLockWindowKeySequence = "Ctrl+Shift+L";
const QString gCutWindowKeySequence = "Ctrl+Shift+X";

const int gEditorFontSize = 14;
const QString gFileScheme = "gnr";

const QString gSearchEngine = QLocale::system().name() == "zh_CN" ? "https://www.baidu.com/s?wd="
                                                                  : "https://www.google.com/search?&q=";
const QString gGuideUrl = "http://gitnoter.github.io/";
const QString gHistoryChangeUrl = "http://gitnoter.github.io/";
const QString gMarkdownLanguageUrl = "http://gitnoter.github.io/";
const QString gIssueUrl = "https://github.com/Gitnoter/Gitnoter/issues";
const QString gEmailToUser = "gitnoter@gmail.com";

const QByteArray gAesKey = "Q5tO3jUB0oe7FmWq";
const QByteArray gAesIv  = "RNNSR8XNbMTuOSGd";

ConfigModel *gConfigModel = new ConfigModel();
GitManager *gGitManager = new GitManager();
ThemeManager *gThemeManager = new ThemeManager();

