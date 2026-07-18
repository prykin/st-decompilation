FUN_0060ca40:
0060CA40  55                        PUSH EBP
0060CA41  8B EC                     MOV EBP,ESP
0060CA43  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0060CA46  56                        PUSH ESI
0060CA47  8B F1                     MOV ESI,ECX
0060CA49  8B 96 09 02 00 00         MOV EDX,dword ptr [ESI + 0x209]
0060CA4F  2B D0                     SUB EDX,EAX
0060CA51  8B C2                     MOV EAX,EDX
0060CA53  89 96 09 02 00 00         MOV dword ptr [ESI + 0x209],EDX
0060CA59  50                        PUSH EAX
0060CA5A  E8 89 5D DF FF            CALL 0x004027e8
0060CA5F  8B 86 09 02 00 00         MOV EAX,dword ptr [ESI + 0x209]
0060CA65  85 C0                     TEST EAX,EAX
0060CA67  0F 87 A8 00 00 00         JA 0x0060cb15
0060CA6D  8B 8E F9 01 00 00         MOV ECX,dword ptr [ESI + 0x1f9]
0060CA73  57                        PUSH EDI
0060CA74  85 C9                     TEST ECX,ECX
0060CA76  C7 86 09 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x209],0x0
0060CA80  B8 79 19 8C 02            MOV EAX,0x28c1979
0060CA85  7C 10                     JL 0x0060ca97
0060CA87  F7 E9                     IMUL ECX
0060CA89  D1 FA                     SAR EDX,0x1
0060CA8B  8B CA                     MOV ECX,EDX
0060CA8D  C1 E9 1F                  SHR ECX,0x1f
0060CA90  03 D1                     ADD EDX,ECX
0060CA92  0F BF FA                  MOVSX EDI,DX
0060CA95  EB 0F                     JMP 0x0060caa6
LAB_0060ca97:
0060CA97  F7 E9                     IMUL ECX
0060CA99  D1 FA                     SAR EDX,0x1
0060CA9B  8B C2                     MOV EAX,EDX
0060CA9D  C1 E8 1F                  SHR EAX,0x1f
0060CAA0  03 D0                     ADD EDX,EAX
0060CAA2  0F BF FA                  MOVSX EDI,DX
0060CAA5  4F                        DEC EDI
LAB_0060caa6:
0060CAA6  8B 8E ED 01 00 00         MOV ECX,dword ptr [ESI + 0x1ed]
0060CAAC  B8 79 19 8C 02            MOV EAX,0x28c1979
0060CAB1  85 C9                     TEST ECX,ECX
0060CAB3  7C 10                     JL 0x0060cac5
0060CAB5  F7 E9                     IMUL ECX
0060CAB7  D1 FA                     SAR EDX,0x1
0060CAB9  8B CA                     MOV ECX,EDX
0060CABB  C1 E9 1F                  SHR ECX,0x1f
0060CABE  03 D1                     ADD EDX,ECX
0060CAC0  0F BF CA                  MOVSX ECX,DX
0060CAC3  EB 0F                     JMP 0x0060cad4
LAB_0060cac5:
0060CAC5  F7 E9                     IMUL ECX
0060CAC7  D1 FA                     SAR EDX,0x1
0060CAC9  8B C2                     MOV EAX,EDX
0060CACB  C1 E8 1F                  SHR EAX,0x1f
0060CACE  03 D0                     ADD EDX,EAX
0060CAD0  0F BF CA                  MOVSX ECX,DX
0060CAD3  49                        DEC ECX
LAB_0060cad4:
0060CAD4  8B 96 E9 01 00 00         MOV EDX,dword ptr [ESI + 0x1e9]
0060CADA  B8 79 19 8C 02            MOV EAX,0x28c1979
0060CADF  85 D2                     TEST EDX,EDX
0060CAE1  7C 10                     JL 0x0060caf3
0060CAE3  F7 EA                     IMUL EDX
0060CAE5  D1 FA                     SAR EDX,0x1
0060CAE7  8B C2                     MOV EAX,EDX
0060CAE9  C1 E8 1F                  SHR EAX,0x1f
0060CAEC  03 D0                     ADD EDX,EAX
0060CAEE  0F BF C2                  MOVSX EAX,DX
0060CAF1  EB 0F                     JMP 0x0060cb02
LAB_0060caf3:
0060CAF3  F7 EA                     IMUL EDX
0060CAF5  D1 FA                     SAR EDX,0x1
0060CAF7  8B C2                     MOV EAX,EDX
0060CAF9  C1 E8 1F                  SHR EAX,0x1f
0060CAFC  03 D0                     ADD EDX,EAX
0060CAFE  0F BF C2                  MOVSX EAX,DX
0060CB01  48                        DEC EAX
LAB_0060cb02:
0060CB02  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
0060CB05  52                        PUSH EDX
0060CB06  57                        PUSH EDI
0060CB07  51                        PUSH ECX
0060CB08  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
0060CB0E  50                        PUSH EAX
0060CB0F  E8 40 5A DF FF            CALL 0x00402554
0060CB14  5F                        POP EDI
LAB_0060cb15:
0060CB15  5E                        POP ESI
0060CB16  5D                        POP EBP
0060CB17  C2 04 00                  RET 0x4
