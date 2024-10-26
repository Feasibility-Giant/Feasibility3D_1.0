file(REMOVE_RECURSE
  "../../../Ext/lazy_loader/__init__.py"
  "../../../Ext/lazy_loader/lazy_loader.py"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/lazy_loader.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
