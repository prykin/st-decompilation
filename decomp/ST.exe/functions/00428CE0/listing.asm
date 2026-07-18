FUN_00428ce0:
00428CE0  55                        PUSH EBP
00428CE1  8B EC                     MOV EBP,ESP
00428CE3  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00428CE6  53                        PUSH EBX
00428CE7  56                        PUSH ESI
00428CE8  57                        PUSH EDI
00428CE9  85 C0                     TEST EAX,EAX
00428CEB  0F 8E 92 00 00 00         JLE 0x00428d83
00428CF1  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00428CF4  85 C0                     TEST EAX,EAX
00428CF6  0F 8E 87 00 00 00         JLE 0x00428d83
00428CFC  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
00428CFF  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00428D02  8A 5D 24                  MOV BL,byte ptr [EBP + 0x24]
LAB_00428d05:
00428D05  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00428D08  33 C0                     XOR EAX,EAX
00428D0A  49                        DEC ECX
00428D0B  55                        PUSH EBP
00428D0C  33 D2                     XOR EDX,EDX
00428D0E  8B 6D 20                  MOV EBP,dword ptr [EBP + 0x20]
LAB_00428d11:
00428D11  80 3C 17 FF               CMP byte ptr [EDI + EDX*0x1],0xff
00428D15  75 0C                     JNZ 0x00428d23
LAB_00428d17:
00428D17  42                        INC EDX
00428D18  49                        DEC ECX
00428D19  7F F6                     JG 0x00428d11
00428D1B  EB 31                     JMP 0x00428d4e
LAB_00428d1d:
00428D1D  80 3C 17 FF               CMP byte ptr [EDI + EDX*0x1],0xff
00428D21  74 F4                     JZ 0x00428d17
LAB_00428d23:
00428D23  8A 04 16                  MOV AL,byte ptr [ESI + EDX*0x1]
00428D26  3C FF                     CMP AL,0xff
00428D28  74 20                     JZ 0x00428d4a
00428D2A  C7 05 04 4E 7F 00 01 00 00 00  MOV dword ptr [0x007f4e04],0x1
00428D34  C6 04 16 FF               MOV byte ptr [ESI + EDX*0x1],0xff
00428D38  80 7C 17 01 FF            CMP byte ptr [EDI + EDX*0x1 + 0x1],0xff
00428D3D  74 0B                     JZ 0x00428d4a
00428D3F  80 7C 16 01 FF            CMP byte ptr [ESI + EDX*0x1 + 0x1],0xff
00428D44  74 04                     JZ 0x00428d4a
00428D46  08 5C 05 00               OR byte ptr [EBP + EAX*0x1],BL
LAB_00428d4a:
00428D4A  42                        INC EDX
00428D4B  49                        DEC ECX
00428D4C  7F CF                     JG 0x00428d1d
LAB_00428d4e:
00428D4E  80 3C 17 FF               CMP byte ptr [EDI + EDX*0x1],0xff
00428D52  8A 04 16                  MOV AL,byte ptr [ESI + EDX*0x1]
00428D55  74 16                     JZ 0x00428d6d
00428D57  3C FF                     CMP AL,0xff
00428D59  74 12                     JZ 0x00428d6d
00428D5B  C7 05 04 4E 7F 00 01 00 00 00  MOV dword ptr [0x007f4e04],0x1
00428D65  C6 04 16 FF               MOV byte ptr [ESI + EDX*0x1],0xff
00428D69  08 5C 05 00               OR byte ptr [EBP + EAX*0x1],BL
LAB_00428d6d:
00428D6D  5D                        POP EBP
00428D6E  03 7D 14                  ADD EDI,dword ptr [EBP + 0x14]
00428D71  03 75 0C                  ADD ESI,dword ptr [EBP + 0xc]
00428D74  FF 4D 1C                  DEC dword ptr [EBP + 0x1c]
00428D77  7F 8C                     JG 0x00428d05
00428D79  A1 04 4E 7F 00            MOV EAX,[0x007f4e04]
00428D7E  5F                        POP EDI
00428D7F  5E                        POP ESI
00428D80  5B                        POP EBX
00428D81  5D                        POP EBP
00428D82  C3                        RET
LAB_00428d83:
00428D83  5F                        POP EDI
00428D84  5E                        POP ESI
00428D85  33 C0                     XOR EAX,EAX
00428D87  5B                        POP EBX
00428D88  5D                        POP EBP
00428D89  C3                        RET
