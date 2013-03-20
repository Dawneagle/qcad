#include <QtScript/QScriptExtensionPlugin>
#include <QtScript/QScriptValue>
#include <QtScript/QScriptEngine>

void qtscript_initialize_com_trolltech_qt_xmlpatterns_bindings(QScriptValue &);

class com_trolltech_qt_xmlpatterns_ScriptPlugin : public QScriptExtensionPlugin
{
public:
    QStringList keys() const;
    void initialize(const QString &key, QScriptEngine *engine);
};

QStringList com_trolltech_qt_xmlpatterns_ScriptPlugin::keys() const
{
    QStringList list;
    list << QLatin1String("qt");
    list << QLatin1String("qt.xmlpatterns");
    return list;
}

void com_trolltech_qt_xmlpatterns_ScriptPlugin::initialize(const QString &key, QScriptEngine *engine)
{
    if (key == QLatin1String("qt")) {
    } else if (key == QLatin1String("qt.xmlpatterns")) {
        QScriptValue extensionObject = engine->globalObject();
        qtscript_initialize_com_trolltech_qt_xmlpatterns_bindings(extensionObject);
    } else {
        Q_ASSERT_X(false, "com_trolltech_qt_xmlpatterns::initialize", qPrintable(key));
    }
}

Q_EXPORT_STATIC_PLUGIN(com_trolltech_qt_xmlpatterns_ScriptPlugin)
Q_EXPORT_PLUGIN2(qtscript_com_trolltech_qt_xmlpatterns, com_trolltech_qt_xmlpatterns_ScriptPlugin)
