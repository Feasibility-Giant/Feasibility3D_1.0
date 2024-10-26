#ifndef CFDOF_WORKBENCH_H
#define CFDOF_WORKBENCH_H

#include <Gui/Workbench.h>
#include <Gui/MenuManager.h>
#include <Gui/ToolBarManager.h>

class CfdOFWorkbench : public Gui::Workbench {
public:
    // Constructor
    CfdOFWorkbench();

    // Function to register the workbench tools and toolbars
    void setup() override;

    // Function to load necessary components when the workbench is activated
    void initialize() override;

    // Function to customize the menus
    void setupMenu(Gui::MenuManager *menuManager) override;

    // Function to customize the toolbars
    void setupToolbars(Gui::ToolBarManager *toolBarManager) override;

    // Destructor
    virtual ~CfdOFWorkbench();
};

#endif // CFDOF_WORKBENCH_H
