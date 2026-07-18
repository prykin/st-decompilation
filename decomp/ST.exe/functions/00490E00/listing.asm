FUN_00490e00:
00490E00  55                        PUSH EBP
00490E01  8B EC                     MOV EBP,ESP
00490E03  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00490E06  BA 01 00 00 00            MOV EDX,0x1
00490E0B  3B C2                     CMP EAX,EDX
00490E0D  75 0A                     JNZ 0x00490e19
00490E0F  89 91 3E 07 00 00         MOV dword ptr [ECX + 0x73e],EDX
00490E15  5D                        POP EBP
00490E16  C2 04 00                  RET 0x4
LAB_00490e19:
00490E19  56                        PUSH ESI
00490E1A  8B B1 3E 07 00 00         MOV ESI,dword ptr [ECX + 0x73e]
00490E20  3B F2                     CMP ESI,EDX
00490E22  5E                        POP ESI
00490E23  75 26                     JNZ 0x00490e4b
00490E25  89 81 3E 07 00 00         MOV dword ptr [ECX + 0x73e],EAX
00490E2B  8B 81 5D 04 00 00         MOV EAX,dword ptr [ECX + 0x45d]
00490E31  83 F8 05                  CMP EAX,0x5
00490E34  75 15                     JNZ 0x00490e4b
00490E36  66 8B 41 32               MOV AX,word ptr [ECX + 0x32]
00490E3A  8A 49 24                  MOV CL,byte ptr [ECX + 0x24]
00490E3D  52                        PUSH EDX
00490E3E  50                        PUSH EAX
00490E3F  51                        PUSH ECX
00490E40  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00490E46  E8 DD 01 F7 FF            CALL 0x00401028
LAB_00490e4b:
00490E4B  5D                        POP EBP
00490E4C  C2 04 00                  RET 0x4
