FUN_006b0ba0:
006B0BA0  55                        PUSH EBP
006B0BA1  8B EC                     MOV EBP,ESP
006B0BA3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B0BA6  85 C0                     TEST EAX,EAX
006B0BA8  74 1F                     JZ 0x006b0bc9
006B0BAA  8B 40 3C                  MOV EAX,dword ptr [EAX + 0x3c]
006B0BAD  85 C0                     TEST EAX,EAX
006B0BAF  74 18                     JZ 0x006b0bc9
006B0BB1  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006B0BB4  8B 08                     MOV ECX,dword ptr [EAX]
006B0BB6  52                        PUSH EDX
006B0BB7  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006B0BBA  52                        PUSH EDX
006B0BBB  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006B0BBE  52                        PUSH EDX
006B0BBF  6A 00                     PUSH 0x0
006B0BC1  50                        PUSH EAX
006B0BC2  FF 51 10                  CALL dword ptr [ECX + 0x10]
006B0BC5  5D                        POP EBP
006B0BC6  C2 10 00                  RET 0x10
LAB_006b0bc9:
006B0BC9  B8 AF FF FF FF            MOV EAX,0xffffffaf
006B0BCE  5D                        POP EBP
006B0BCF  C2 10 00                  RET 0x10
