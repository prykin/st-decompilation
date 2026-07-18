FUN_00717870:
00717870  53                        PUSH EBX
00717871  56                        PUSH ESI
00717872  57                        PUSH EDI
00717873  8B F9                     MOV EDI,ECX
00717875  33 F6                     XOR ESI,ESI
00717877  89 B7 BA 04 00 00         MOV dword ptr [EDI + 0x4ba],ESI
0071787D  89 B7 A2 04 00 00         MOV dword ptr [EDI + 0x4a2],ESI
00717883  8D 9F 72 04 00 00         LEA EBX,[EDI + 0x472]
LAB_00717889:
00717889  8B 03                     MOV EAX,dword ptr [EBX]
0071788B  8B 0C 30                  MOV ECX,dword ptr [EAX + ESI*0x1]
0071788E  51                        PUSH ECX
0071788F  E8 FC E5 F8 FF            CALL 0x006a5e90
00717894  83 C6 04                  ADD ESI,0x4
00717897  81 FE 40 01 00 00         CMP ESI,0x140
0071789D  7C EA                     JL 0x00717889
0071789F  53                        PUSH EBX
007178A0  E8 BB 37 F9 FF            CALL 0x006ab060
007178A5  8D 97 6E 04 00 00         LEA EDX,[EDI + 0x46e]
007178AB  52                        PUSH EDX
007178AC  E8 AF 37 F9 FF            CALL 0x006ab060
007178B1  C7 87 66 04 00 00 00 00 00 00  MOV dword ptr [EDI + 0x466],0x0
007178BB  5F                        POP EDI
007178BC  5E                        POP ESI
007178BD  5B                        POP EBX
007178BE  C3                        RET
