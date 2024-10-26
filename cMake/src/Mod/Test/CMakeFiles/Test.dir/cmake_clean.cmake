file(REMOVE_RECURSE
  "../../../Mod/Test/BaseTests.py"
  "../../../Mod/Test/Document.py"
  "../../../Mod/Test/GuiDocument.py"
  "../../../Mod/Test/Init.py"
  "../../../Mod/Test/InitGui.py"
  "../../../Mod/Test/Menu.py"
  "../../../Mod/Test/Metadata.py"
  "../../../Mod/Test/StringHasher.py"
  "../../../Mod/Test/TestApp.py"
  "../../../Mod/Test/TestData/bad_root_node.xml"
  "../../../Mod/Test/TestData/bad_version.xml"
  "../../../Mod/Test/TestData/bad_xml.xml"
  "../../../Mod/Test/TestData/basic_metadata.xml"
  "../../../Mod/Test/TestData/content_items.xml"
  "../../../Mod/Test/TestGui.py"
  "../../../Mod/Test/TestPerf.py"
  "../../../Mod/Test/TestPythonSyntax.py"
  "../../../Mod/Test/UnicodeTests.py"
  "../../../Mod/Test/UnitTests.py"
  "../../../Mod/Test/Workbench.py"
  "../../../Mod/Test/__init__.py"
  "../../../Mod/Test/testmakeWireString.py"
  "../../../Mod/Test/unittestgui.py"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/Test.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
