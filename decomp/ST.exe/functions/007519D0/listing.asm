FUN_007519d0:
007519D0  55                        PUSH EBP
007519D1  8B EC                     MOV EBP,ESP
007519D3  51                        PUSH ECX
007519D4  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
007519D7  33 C9                     XOR ECX,ECX
007519D9  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
007519DC  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007519DF  53                        PUSH EBX
007519E0  56                        PUSH ESI
007519E1  66 8B 08                  MOV CX,word ptr [EAX]
007519E4  57                        PUSH EDI
007519E5  BB 10 00 00 00            MOV EBX,0x10
007519EA  83 C0 02                  ADD EAX,0x2
LAB_007519ed:
007519ED  8B D1                     MOV EDX,ECX
007519EF  83 E2 01                  AND EDX,0x1
007519F2  D1 F9                     SAR ECX,0x1
007519F4  4B                        DEC EBX
007519F5  75 0D                     JNZ 0x00751a04
007519F7  33 C9                     XOR ECX,ECX
007519F9  BB 10 00 00 00            MOV EBX,0x10
007519FE  66 8B 08                  MOV CX,word ptr [EAX]
00751A01  83 C0 02                  ADD EAX,0x2
LAB_00751a04:
00751A04  85 D2                     TEST EDX,EDX
00751A06  74 0E                     JZ 0x00751a16
00751A08  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00751A0B  8A 10                     MOV DL,byte ptr [EAX]
00751A0D  88 16                     MOV byte ptr [ESI],DL
00751A0F  46                        INC ESI
00751A10  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00751A13  40                        INC EAX
00751A14  EB D7                     JMP 0x007519ed
LAB_00751a16:
00751A16  8B D1                     MOV EDX,ECX
00751A18  83 E2 01                  AND EDX,0x1
00751A1B  D1 F9                     SAR ECX,0x1
00751A1D  4B                        DEC EBX
00751A1E  75 0D                     JNZ 0x00751a2d
00751A20  33 C9                     XOR ECX,ECX
00751A22  BB 10 00 00 00            MOV EBX,0x10
00751A27  66 8B 08                  MOV CX,word ptr [EAX]
00751A2A  83 C0 02                  ADD EAX,0x2
LAB_00751a2d:
00751A2D  85 D2                     TEST EDX,EDX
00751A2F  74 51                     JZ 0x00751a82
00751A31  33 F6                     XOR ESI,ESI
00751A33  66 8B 30                  MOV SI,word ptr [EAX]
00751A36  83 C0 02                  ADD EAX,0x2
00751A39  8B D6                     MOV EDX,ESI
00751A3B  8B FE                     MOV EDI,ESI
00751A3D  C1 FA 08                  SAR EDX,0x8
00751A40  81 E7 07 F8 FF FF         AND EDI,0xfffff807
00751A46  80 E2 07                  AND DL,0x7
00751A49  81 CF 07 00 FF FF         OR EDI,0xffff0007
00751A4F  80 C2 02                  ADD DL,0x2
00751A52  C1 FF 03                  SAR EDI,0x3
00751A55  81 E6 FF 00 00 00         AND ESI,0xff
00751A5B  81 E2 FF 00 00 00         AND EDX,0xff
00751A61  0B FE                     OR EDI,ESI
00751A63  80 FA 02                  CMP DL,0x2
00751A66  75 63                     JNZ 0x00751acb
00751A68  33 D2                     XOR EDX,EDX
00751A6A  8A 10                     MOV DL,byte ptr [EAX]
00751A6C  40                        INC EAX
00751A6D  8B F2                     MOV ESI,EDX
00751A6F  83 EE 00                  SUB ESI,0x0
00751A72  0F 84 80 00 00 00         JZ 0x00751af8
00751A78  4E                        DEC ESI
00751A79  0F 84 6E FF FF FF         JZ 0x007519ed
00751A7F  42                        INC EDX
00751A80  EB 49                     JMP 0x00751acb
LAB_00751a82:
00751A82  8B D1                     MOV EDX,ECX
00751A84  83 E2 01                  AND EDX,0x1
00751A87  D1 E2                     SHL EDX,0x1
00751A89  D1 F9                     SAR ECX,0x1
00751A8B  4B                        DEC EBX
00751A8C  75 0D                     JNZ 0x00751a9b
00751A8E  33 C9                     XOR ECX,ECX
00751A90  BB 10 00 00 00            MOV EBX,0x10
00751A95  66 8B 08                  MOV CX,word ptr [EAX]
00751A98  83 C0 02                  ADD EAX,0x2
LAB_00751a9b:
00751A9B  8B F1                     MOV ESI,ECX
00751A9D  83 E6 01                  AND ESI,0x1
00751AA0  D1 F9                     SAR ECX,0x1
00751AA2  4B                        DEC EBX
00751AA3  8D 54 32 02               LEA EDX,[EDX + ESI*0x1 + 0x2]
00751AA7  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
00751AAA  75 0F                     JNZ 0x00751abb
00751AAC  33 C9                     XOR ECX,ECX
00751AAE  C7 45 08 10 00 00 00      MOV dword ptr [EBP + 0x8],0x10
00751AB5  66 8B 08                  MOV CX,word ptr [EAX]
00751AB8  83 C0 02                  ADD EAX,0x2
LAB_00751abb:
00751ABB  33 DB                     XOR EBX,EBX
00751ABD  8A 18                     MOV BL,byte ptr [EAX]
00751ABF  8B FB                     MOV EDI,EBX
00751AC1  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00751AC4  81 EF 00 01 00 00         SUB EDI,0x100
00751ACA  40                        INC EAX
LAB_00751acb:
00751ACB  8B F2                     MOV ESI,EDX
00751ACD  4A                        DEC EDX
00751ACE  85 F6                     TEST ESI,ESI
FUN_007519d0::cf_continue_loop_00751AD0:
00751AD0  0F 84 17 FF FF FF         JZ 0x007519ed
00751AD6  42                        INC EDX
00751AD7  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
LAB_00751ada:
00751ADA  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00751ADD  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00751AE0  46                        INC ESI
00751AE1  8A 14 17                  MOV DL,byte ptr [EDI + EDX*0x1]
00751AE4  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00751AE7  88 56 FF                  MOV byte ptr [ESI + -0x1],DL
00751AEA  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00751AED  4A                        DEC EDX
00751AEE  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
00751AF1  75 E7                     JNZ 0x00751ada
00751AF3  E9 F5 FE FF FF            JMP 0x007519ed
LAB_00751af8:
00751AF8  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00751AFB  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00751AFE  5F                        POP EDI
00751AFF  5E                        POP ESI
00751B00  2B C1                     SUB EAX,ECX
00751B02  5B                        POP EBX
00751B03  8B E5                     MOV ESP,EBP
00751B05  5D                        POP EBP
00751B06  C3                        RET
