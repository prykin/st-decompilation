FUN_0074ceb2:
0074CEB2  55                        PUSH EBP
0074CEB3  8B EC                     MOV EBP,ESP
0074CEB5  53                        PUSH EBX
0074CEB6  56                        PUSH ESI
0074CEB7  57                        PUSH EDI
0074CEB8  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
0074CEBB  85 FF                     TEST EDI,EDI
0074CEBD  75 07                     JNZ 0x0074cec6
0074CEBF  B8 03 40 00 80            MOV EAX,0x80004003
0074CEC4  EB 60                     JMP 0x0074cf26
LAB_0074cec6:
0074CEC6  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0074CEC9  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
0074CECC  89 5E 4C                  MOV dword ptr [ESI + 0x4c],EBX
0074CECF  8B 46 D0                  MOV EAX,dword ptr [ESI + -0x30]
0074CED2  50                        PUSH EAX
0074CED3  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
0074CED6  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
0074CEDC  8B 07                     MOV EAX,dword ptr [EDI]
0074CEDE  57                        PUSH EDI
0074CEDF  FF 50 04                  CALL dword ptr [EAX + 0x4]
0074CEE2  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
0074CEE5  85 C0                     TEST EAX,EAX
0074CEE7  74 06                     JZ 0x0074ceef
0074CEE9  8B 08                     MOV ECX,dword ptr [EAX]
0074CEEB  50                        PUSH EAX
0074CEEC  FF 51 08                  CALL dword ptr [ECX + 0x8]
LAB_0074ceef:
0074CEEF  89 7E 04                  MOV dword ptr [ESI + 0x4],EDI
0074CEF2  8B 46 48                  MOV EAX,dword ptr [ESI + 0x48]
0074CEF5  8B 88 90 00 00 00         MOV ECX,dword ptr [EAX + 0x90]
0074CEFB  83 79 18 00               CMP dword ptr [ECX + 0x18],0x0
0074CEFF  74 1A                     JZ 0x0074cf1b
0074CF01  53                        PUSH EBX
0074CF02  57                        PUSH EDI
0074CF03  E8 4E 02 00 00            CALL 0x0074d156
0074CF08  8B F0                     MOV ESI,EAX
0074CF0A  85 F6                     TEST ESI,ESI
0074CF0C  7D 0D                     JGE 0x0074cf1b
0074CF0E  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
0074CF11  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
0074CF17  8B C6                     MOV EAX,ESI
0074CF19  EB 0B                     JMP 0x0074cf26
LAB_0074cf1b:
0074CF1B  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
0074CF1E  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
0074CF24  33 C0                     XOR EAX,EAX
LAB_0074cf26:
0074CF26  5F                        POP EDI
0074CF27  5E                        POP ESI
0074CF28  5B                        POP EBX
0074CF29  5D                        POP EBP
0074CF2A  C2 0C 00                  RET 0xc
