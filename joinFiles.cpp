void SYNTAX_3_JOIN_FILES(const char* FILE_1, const char* FILE_2, const char* DEST_FILE) {
    SYNTAX_1_COPY_2_FILES(FILE_1, DEST_FILE, false);

    // Thêm một dòng mới
    {
        std::ofstream dest_file(DEST_FILE, std::ios::binary | std::ios::app);
        if (!dest_file) {
            std::cerr << "Error: cannot open destination file to append newline." << std::endl;
            return;
        }
        dest_file.write("\n", 1);
    }
    
    SYNTAX_1_COPY_2_FILES(FILE_2, DEST_FILE, true);
}
