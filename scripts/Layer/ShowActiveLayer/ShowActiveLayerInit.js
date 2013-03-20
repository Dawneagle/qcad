function init(basePath) {
    var action = new RGuiAction(qsTranslate("ShowActiveLayer", "Show &Only Active"),
        RMainWindowQt.getMainWindow());
    action.setRequiresDocument(true);
    action.setScriptFile(basePath + "/ShowActiveLayer.js");
    action.setIcon(basePath + "/ShowActiveLayer.svg");
    action.setDefaultShortcut(new QKeySequence("y,o"));
    action.setDefaultCommands(["layershowactive", "yo"]);
    action.setSortOrder(20);
    EAction.addGuiActionTo(action, Layer, true, true);
}
