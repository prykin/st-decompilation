FUN_006e6150:
006E6150  55                        PUSH EBP
006E6151  8B EC                     MOV EBP,ESP
006E6153  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006E6156  8B 01                     MOV EAX,dword ptr [ECX]
006E6158  52                        PUSH EDX
006E6159  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006E615C  6A 00                     PUSH 0x0
006E615E  52                        PUSH EDX
006E615F  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006E6162  52                        PUSH EDX
006E6163  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006E6166  52                        PUSH EDX
006E6167  FF 50 08                  CALL dword ptr [EAX + 0x8]
006E616A  5D                        POP EBP
006E616B  C2 10 00                  RET 0x10
