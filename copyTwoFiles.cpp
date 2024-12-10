void SYNTAX_1_COPY_2_FILES(const char* pSOURCE_FILE, const char* pDEST_FILE, bool append = false) {
    std::ios::openmode mode = std::ios::binary;
    if (append) {
        mode |= std::ios::app;
    }

    std::ifstream source_file(pSOURCE_FILE, std::ios::binary);
    std::ofstream dest_file(pDEST_FILE, std::ios::binary|mode);

    if (!source_file) {
        std::cerr << "Error: cannot open source file." << std::endl;
        return;
    }
    if (!dest_file) {
        std::cerr << "Error: cannot open destination file." << std::endl;
        return;
    }

    const int bufferSize = 512;
    char buffer[bufferSize];
    while (source_file.read(buffer, bufferSize)) {
        dest_file.write(buffer, source_file.gcount());
    }

    if (source_file.gcount() > 0) {
        dest_file.write(buffer, source_file.gcount());
    }

    source_file.close();
    dest_file.close();
}
