#include <drogon/drogon.h>

int main() {
    drogon::app()
            .addListener("0.0.0.0", 8888)
            .setThreadNum(16)
            .run();
    return 0;
}
