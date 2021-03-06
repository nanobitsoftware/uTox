/** slash_send_file()
 *
 * takes a file from the message box, and send it to the current friend.
 *
 * TODO, make sure the file exists.
 */
int slash_send_file(FRIEND *friend_handle, const uint8_t *filepath);

/** utox_run_command()
 *
 * takes data string and parses it for a command, if that command is supported, acts on that command, else it simply
 * results the processed command and argv.
 *
 * Returns the remaining string length.
 */
uint16_t utox_run_command(char_t *string, uint16_t string_length, char_t **cmd, char_t **argument, int trusted);

extern _Bool g_select_add_friend_later;
void do_tox_url(uint8_t *url_string, int len);
