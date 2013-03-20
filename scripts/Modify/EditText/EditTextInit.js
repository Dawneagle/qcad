function init(basePath) {
    var action = new RGuiAction(qsTranslate("EditText", "Edit Te&xt"),
        RMainWindowQt.getMainWindow());
    action.setRequiresDocument(true);
    action.setScriptFile(basePath + "/EditText.js");
    action.setIcon(basePath + "/EditText.svg");
    action.setStatusTip(qsTranslate("EditText", "Edit text"));
    action.setDefaultShortcut(new QKeySequence("m,t"));
    action.setDefaultCommands(["edittext", "modifytext", "mt"]);
    action.setSortOrder(5000);
    EAction.addGuiActionTo(action, Modify, true, true, true, true);
}
