# Install script for directory: /home/jarvis/Documents/freecad-source/src/Mod/Draft

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/jarvis/Documents/freecad-source/cMake/src/Mod/Draft/App/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Draft" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/Init.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/InitGui.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/Draft.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/DraftTools.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/DraftGui.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/DraftVecUtils.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/DraftGeomUtils.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/WorkingPlane.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/TestDraft.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/TestDraftGui.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/importAirfoilDAT.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/importDXF.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/importDWG.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/importOCA.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/importSVG.py"
    "/home/jarvis/Documents/freecad-source/cMake/src/Mod/Draft/Draft_rc.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Draft/drafttests" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/drafttests/__init__.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/drafttests/auxiliary.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/drafttests/test_import.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/drafttests/test_import_gui.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/drafttests/test_import_tools.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/drafttests/test_pivy.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/drafttests/test_array.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/drafttests/test_creation.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/drafttests/test_modification.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/drafttests/test_svg.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/drafttests/test_dxf.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/drafttests/test_dwg.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/drafttests/test_oca.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/drafttests/test_airfoildat.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/drafttests/test_draftgeomutils.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/drafttests/draft_test_objects.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/drafttests/README.md"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Draft/draftgeoutils" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftgeoutils/__init__.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftgeoutils/general.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftgeoutils/edges.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftgeoutils/intersections.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftgeoutils/sort_edges.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftgeoutils/faces.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftgeoutils/geometry.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftgeoutils/geo_arrays.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftgeoutils/wires.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftgeoutils/arcs.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftgeoutils/fillets.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftgeoutils/offsets.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftgeoutils/linear_algebra.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftgeoutils/cuboids.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftgeoutils/circles.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftgeoutils/circles_apollonius.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftgeoutils/circle_inversion.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftgeoutils/circles_incomplete.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Draft/draftutils" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftutils/__init__.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftutils/groups.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftutils/init_tools.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftutils/init_draft_statusbar.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftutils/params.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftutils/units.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftutils/utils.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftutils/gui_utils.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftutils/todo.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftutils/translate.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftutils/messages.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftutils/README.md"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftutils/grid_observer.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Draft/draftfunctions" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftfunctions/__init__.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftfunctions/array.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftfunctions/cut.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftfunctions/downgrade.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftfunctions/draftify.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftfunctions/dxf.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftfunctions/extrude.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftfunctions/fuse.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftfunctions/heal.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftfunctions/join.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftfunctions/mirror.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftfunctions/move.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftfunctions/offset.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftfunctions/rotate.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftfunctions/scale.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftfunctions/split.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftfunctions/svg.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftfunctions/svgshapes.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftfunctions/svgtext.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftfunctions/upgrade.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftfunctions/README.md"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Draft/draftmake" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftmake/__init__.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftmake/make_arc_3points.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftmake/make_array.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftmake/make_bezcurve.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftmake/make_block.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftmake/make_bspline.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftmake/make_circle.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftmake/make_circulararray.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftmake/make_clone.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftmake/make_copy.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftmake/make_dimension.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftmake/make_ellipse.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftmake/make_facebinder.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftmake/make_fillet.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftmake/make_label.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftmake/make_layer.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftmake/make_line.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftmake/make_orthoarray.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftmake/make_patharray.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftmake/make_point.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftmake/make_pointarray.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftmake/make_polararray.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftmake/make_polygon.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftmake/make_rectangle.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftmake/make_shape2dview.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftmake/make_shapestring.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftmake/make_sketch.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftmake/make_text.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftmake/make_wire.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftmake/make_wpproxy.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftmake/make_hatch.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftmake/README.md"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Draft/draftobjects" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftobjects/__init__.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftobjects/array.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftobjects/base.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftobjects/bezcurve.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftobjects/block.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftobjects/bspline.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftobjects/circle.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftobjects/clone.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftobjects/ellipse.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftobjects/facebinder.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftobjects/draft_annotation.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftobjects/fillet.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftobjects/draftlink.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftobjects/label.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftobjects/layer.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftobjects/dimension.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftobjects/patharray.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftobjects/pathtwistedarray.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftobjects/point.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftobjects/pointarray.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftobjects/polygon.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftobjects/rectangle.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftobjects/shapestring.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftobjects/shape2dview.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftobjects/text.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftobjects/wire.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftobjects/wpproxy.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftobjects/hatch.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftobjects/README.md"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Draft/draftviewproviders" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftviewproviders/__init__.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftviewproviders/view_array.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftviewproviders/view_base.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftviewproviders/view_bezcurve.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftviewproviders/view_bspline.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftviewproviders/view_circulararray.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftviewproviders/view_clone.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftviewproviders/view_facebinder.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftviewproviders/view_orthoarray.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftviewproviders/view_polararray.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftviewproviders/view_draft_annotation.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftviewproviders/view_fillet.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftviewproviders/view_draftlink.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftviewproviders/view_label.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftviewproviders/view_layer.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftviewproviders/view_dimension.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftviewproviders/view_point.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftviewproviders/view_rectangle.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftviewproviders/view_text.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftviewproviders/view_wire.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftviewproviders/view_wpproxy.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftviewproviders/view_hatch.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftviewproviders/view_shapestring.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftviewproviders/README.md"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Draft/draftguitools" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftguitools/__init__.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftguitools/gui_annotationstyleeditor.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftguitools/gui_base.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftguitools/gui_base_original.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftguitools/gui_tool_utils.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftguitools/gui_planeproxy.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftguitools/gui_selectplane.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftguitools/gui_snaps.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftguitools/gui_snapper.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftguitools/gui_trackers.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftguitools/gui_edit_base_object.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftguitools/gui_edit_draft_objects.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftguitools/gui_edit_arch_objects.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftguitools/gui_edit_part_objects.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftguitools/gui_edit_sketcher_objects.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftguitools/gui_edit.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftguitools/gui_togglemodes.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftguitools/gui_groups.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftguitools/gui_grid.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftguitools/gui_heal.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftguitools/gui_dimension_ops.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftguitools/gui_lineslope.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftguitools/gui_layers.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftguitools/gui_setstyle.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftguitools/gui_hyperlink.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftguitools/gui_lines.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftguitools/gui_fillets.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftguitools/gui_splines.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftguitools/gui_beziers.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftguitools/gui_rectangles.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftguitools/gui_arcs.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftguitools/gui_circles.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftguitools/gui_polygons.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftguitools/gui_ellipses.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftguitools/gui_texts.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftguitools/gui_dimensions.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftguitools/gui_shapestrings.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftguitools/gui_points.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftguitools/gui_facebinders.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftguitools/gui_labels.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftguitools/gui_hatch.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftguitools/gui_subelements.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftguitools/gui_move.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftguitools/gui_styles.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftguitools/gui_rotate.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftguitools/gui_offset.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftguitools/gui_stretch.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftguitools/gui_join.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftguitools/gui_split.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftguitools/gui_upgrade.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftguitools/gui_downgrade.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftguitools/gui_trimex.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftguitools/gui_scale.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftguitools/gui_wire2spline.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftguitools/gui_shape2dview.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftguitools/gui_draft2sketch.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftguitools/gui_arrays.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftguitools/gui_circulararray.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftguitools/gui_orthoarray.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftguitools/gui_patharray.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftguitools/gui_pathtwistedarray.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftguitools/gui_pointarray.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftguitools/gui_polararray.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftguitools/gui_clone.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftguitools/gui_mirror.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/draftguitools/README.md"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Mod/Draft/drafttaskpanels" TYPE FILE FILES
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/drafttaskpanels/__init__.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/drafttaskpanels/task_circulararray.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/drafttaskpanels/task_orthoarray.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/drafttaskpanels/task_polararray.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/drafttaskpanels/task_scale.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/drafttaskpanels/task_selectplane.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/drafttaskpanels/task_shapestring.py"
    "/home/jarvis/Documents/freecad-source/src/Mod/Draft/drafttaskpanels/README.md"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/Mod/Draft/Resources/icons" TYPE FILE FILES "/home/jarvis/Documents/freecad-source/src/Mod/Draft/Resources/icons/DraftWorkbench.svg")
endif()

