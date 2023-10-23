{
    "cmd": ["g++", "-std=gnu++17", "-Wshadow", "-O2", "-g", "-D_GLIBCXX_DEBUG", "${file}", "-o", "${file_path}/a"],
    "file_regex": "^(..[^:]*):([0-9]+):?([0-9]+)?:? (.*)$",
    "working_dir": "${file_path}",
    "selector": "source.c, source.c++",

    "variants":
    [
        {
            "name": "Run",
            "cmd": ["${file_path}/${file_base_name}"]
        }
    ]
}
	
