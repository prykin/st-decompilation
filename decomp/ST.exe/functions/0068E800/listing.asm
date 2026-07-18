FUN_0068e800:
0068E800  55                        PUSH EBP
0068E801  8B EC                     MOV EBP,ESP
0068E803  56                        PUSH ESI
0068E804  8B B1 BD 00 00 00         MOV ESI,dword ptr [ECX + 0xbd]
0068E80A  57                        PUSH EDI
0068E80B  33 C0                     XOR EAX,EAX
0068E80D  8B 7E 0C                  MOV EDI,dword ptr [ESI + 0xc]
0068E810  33 D2                     XOR EDX,EDX
0068E812  85 FF                     TEST EDI,EDI
0068E814  7E 23                     JLE 0x0068e839
0068E816  53                        PUSH EBX
0068E817  66 8B 5D 08               MOV BX,word ptr [EBP + 0x8]
0068E81B  3B D7                     CMP EDX,EDI
LAB_0068e81d:
0068E81D  73 0B                     JNC 0x0068e82a
0068E81F  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
0068E822  0F AF CA                  IMUL ECX,EDX
0068E825  03 4E 1C                  ADD ECX,dword ptr [ESI + 0x1c]
0068E828  EB 02                     JMP 0x0068e82c
LAB_0068e82a:
0068E82A  33 C9                     XOR ECX,ECX
LAB_0068e82c:
0068E82C  66 39 59 0C               CMP word ptr [ECX + 0xc],BX
0068E830  75 01                     JNZ 0x0068e833
0068E832  40                        INC EAX
LAB_0068e833:
0068E833  42                        INC EDX
0068E834  3B D7                     CMP EDX,EDI
0068E836  7C E5                     JL 0x0068e81d
0068E838  5B                        POP EBX
LAB_0068e839:
0068E839  5F                        POP EDI
0068E83A  5E                        POP ESI
0068E83B  5D                        POP EBP
0068E83C  C2 04 00                  RET 0x4
