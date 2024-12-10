void SYNTAX_2_COPY_FILE_TO_PATH(const char* SOURCE_FILE, const char* DEST_PATH) {
    std::string DEST_FILE_NAME = std::string(DEST_PATH) + "\\" + std::string(SOURCE_FILE);
    std::cout<<DEST_FILE_NAME;
    SYNTAX_1_COPY_2_FILES(SOURCE_FILE, DEST_FILE_NAME.c_str(), false);
    // Full detail in copyTwoFiles.cpp
}
