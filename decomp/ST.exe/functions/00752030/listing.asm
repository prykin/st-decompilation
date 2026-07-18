FUN_00752030:
00752030  55                        PUSH EBP
00752031  8B EC                     MOV EBP,ESP
00752033  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00752036  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00752039  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0075203C  50                        PUSH EAX
0075203D  8B 42 32                  MOV EAX,dword ptr [EDX + 0x32]
00752040  51                        PUSH ECX
00752041  50                        PUSH EAX
00752042  FF 15 00 BD 85 00         CALL dword ptr [0x0085bd00]
00752048  83 F8 FF                  CMP EAX,-0x1
0075204B  75 05                     JNZ 0x00752052
0075204D  B8 F4 FF FF FF            MOV EAX,0xfffffff4
LAB_00752052:
00752052  5D                        POP EBP
00752053  C2 0C 00                  RET 0xc
