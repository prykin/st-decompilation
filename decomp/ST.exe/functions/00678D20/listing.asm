FUN_00678d20:
00678D20  55                        PUSH EBP
00678D21  8B EC                     MOV EBP,ESP
00678D23  53                        PUSH EBX
00678D24  56                        PUSH ESI
00678D25  8B B1 95 06 00 00         MOV ESI,dword ptr [ECX + 0x695]
00678D2B  57                        PUSH EDI
00678D2C  33 C0                     XOR EAX,EAX
00678D2E  8B 7E 0C                  MOV EDI,dword ptr [ESI + 0xc]
00678D31  85 FF                     TEST EDI,EDI
00678D33  7E 2B                     JLE 0x00678d60
00678D35  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00678D38  3B C7                     CMP EAX,EDI
LAB_00678d3a:
00678D3A  73 0D                     JNC 0x00678d49
00678D3C  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
00678D3F  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
00678D42  0F AF C8                  IMUL ECX,EAX
00678D45  03 CA                     ADD ECX,EDX
00678D47  EB 02                     JMP 0x00678d4b
LAB_00678d49:
00678D49  33 C9                     XOR ECX,ECX
LAB_00678d4b:
00678D4B  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
00678D4E  85 D2                     TEST EDX,EDX
00678D50  74 09                     JZ 0x00678d5b
00678D52  3B D3                     CMP EDX,EBX
00678D54  75 05                     JNZ 0x00678d5b
00678D56  83 39 00                  CMP dword ptr [ECX],0x0
00678D59  75 08                     JNZ 0x00678d63
LAB_00678d5b:
00678D5B  40                        INC EAX
00678D5C  3B C7                     CMP EAX,EDI
00678D5E  7C DA                     JL 0x00678d3a
LAB_00678d60:
00678D60  83 C8 FF                  OR EAX,0xffffffff
LAB_00678d63:
00678D63  5F                        POP EDI
00678D64  5E                        POP ESI
00678D65  5B                        POP EBX
00678D66  5D                        POP EBP
00678D67  C2 04 00                  RET 0x4
