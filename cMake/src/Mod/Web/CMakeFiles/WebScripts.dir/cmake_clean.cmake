file(REMOVE_RECURSE
  "../../../Mod/Web/Init.py"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/WebScripts.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
