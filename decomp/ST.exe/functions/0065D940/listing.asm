FUN_0065d940:
0065D940  55                        PUSH EBP
0065D941  8B EC                     MOV EBP,ESP
0065D943  53                        PUSH EBX
0065D944  56                        PUSH ESI
0065D945  57                        PUSH EDI
0065D946  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0065D949  85 FF                     TEST EDI,EDI
0065D94B  8B D9                     MOV EBX,ECX
0065D94D  74 49                     JZ 0x0065d998
0065D94F  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
0065D952  33 F6                     XOR ESI,ESI
0065D954  85 C0                     TEST EAX,EAX
0065D956  7E 40                     JLE 0x0065d998
0065D958  3B F0                     CMP ESI,EAX
LAB_0065d95a:
0065D95A  73 0D                     JNC 0x0065d969
0065D95C  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
0065D95F  8B 4F 1C                  MOV ECX,dword ptr [EDI + 0x1c]
0065D962  0F AF C6                  IMUL EAX,ESI
0065D965  03 C1                     ADD EAX,ECX
0065D967  EB 02                     JMP 0x0065d96b
LAB_0065d969:
0065D969  33 C0                     XOR EAX,EAX
LAB_0065d96b:
0065D96B  66 8B 00                  MOV AX,word ptr [EAX]
0065D96E  8A 4B 24                  MOV CL,byte ptr [EBX + 0x24]
0065D971  6A 01                     PUSH 0x1
0065D973  50                        PUSH EAX
0065D974  51                        PUSH ECX
0065D975  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0065D97B  E8 3A 4F DA FF            CALL 0x004028ba
0065D980  85 C0                     TEST EAX,EAX
0065D982  74 0C                     JZ 0x0065d990
0065D984  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0065D987  8B CB                     MOV ECX,EBX
0065D989  52                        PUSH EDX
0065D98A  50                        PUSH EAX
0065D98B  E8 70 68 DA FF            CALL 0x00404200
LAB_0065d990:
0065D990  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
0065D993  46                        INC ESI
0065D994  3B F0                     CMP ESI,EAX
0065D996  7C C2                     JL 0x0065d95a
LAB_0065d998:
0065D998  5F                        POP EDI
0065D999  5E                        POP ESI
0065D99A  5B                        POP EBX
0065D99B  5D                        POP EBP
0065D99C  C2 08 00                  RET 0x8
