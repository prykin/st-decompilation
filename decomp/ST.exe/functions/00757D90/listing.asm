FUN_00757d90:
00757D90  55                        PUSH EBP
00757D91  8B EC                     MOV EBP,ESP
00757D93  53                        PUSH EBX
00757D94  56                        PUSH ESI
00757D95  57                        PUSH EDI
00757D96  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00757D99  BB 02 00 00 00            MOV EBX,0x2
00757D9E  8B 77 10                  MOV ESI,dword ptr [EDI + 0x10]
00757DA1  8B 0E                     MOV ECX,dword ptr [ESI]
00757DA3  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
LAB_00757da6:
00757DA6  85 C0                     TEST EAX,EAX
00757DA8  75 0D                     JNZ 0x00757db7
00757DAA  57                        PUSH EDI
00757DAB  FF 56 0C                  CALL dword ptr [ESI + 0xc]
00757DAE  85 C0                     TEST EAX,EAX
00757DB0  74 73                     JZ 0x00757e25
00757DB2  8B 0E                     MOV ECX,dword ptr [ESI]
00757DB4  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
LAB_00757db7:
00757DB7  33 D2                     XOR EDX,EDX
00757DB9  48                        DEC EAX
00757DBA  8A 11                     MOV DL,byte ptr [ECX]
00757DBC  41                        INC ECX
00757DBD  81 FA FF 00 00 00         CMP EDX,0xff
00757DC3  74 2D                     JZ 0x00757df2
LAB_00757dc5:
00757DC5  8B 97 A6 01 00 00         MOV EDX,dword ptr [EDI + 0x1a6]
00757DCB  FF 42 5C                  INC dword ptr [EDX + 0x5c]
00757DCE  89 0E                     MOV dword ptr [ESI],ECX
00757DD0  85 C0                     TEST EAX,EAX
00757DD2  89 46 04                  MOV dword ptr [ESI + 0x4],EAX
00757DD5  75 0D                     JNZ 0x00757de4
00757DD7  57                        PUSH EDI
00757DD8  FF 56 0C                  CALL dword ptr [ESI + 0xc]
00757DDB  85 C0                     TEST EAX,EAX
00757DDD  74 46                     JZ 0x00757e25
00757DDF  8B 0E                     MOV ECX,dword ptr [ESI]
00757DE1  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
LAB_00757de4:
00757DE4  33 D2                     XOR EDX,EDX
00757DE6  48                        DEC EAX
00757DE7  8A 11                     MOV DL,byte ptr [ECX]
00757DE9  41                        INC ECX
00757DEA  81 FA FF 00 00 00         CMP EDX,0xff
00757DF0  75 D3                     JNZ 0x00757dc5
LAB_00757df2:
00757DF2  85 C0                     TEST EAX,EAX
00757DF4  75 0D                     JNZ 0x00757e03
00757DF6  57                        PUSH EDI
00757DF7  FF 56 0C                  CALL dword ptr [ESI + 0xc]
00757DFA  85 C0                     TEST EAX,EAX
00757DFC  74 27                     JZ 0x00757e25
00757DFE  8B 0E                     MOV ECX,dword ptr [ESI]
00757E00  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
LAB_00757e03:
00757E03  33 D2                     XOR EDX,EDX
00757E05  48                        DEC EAX
00757E06  8A 11                     MOV DL,byte ptr [ECX]
00757E08  41                        INC ECX
00757E09  81 FA FF 00 00 00         CMP EDX,0xff
00757E0F  74 E1                     JZ 0x00757df2
00757E11  85 D2                     TEST EDX,EDX
00757E13  75 19                     JNZ 0x00757e2e
00757E15  8B 97 A6 01 00 00         MOV EDX,dword ptr [EDI + 0x1a6]
00757E1B  01 5A 5C                  ADD dword ptr [EDX + 0x5c],EBX
00757E1E  89 0E                     MOV dword ptr [ESI],ECX
00757E20  89 46 04                  MOV dword ptr [ESI + 0x4],EAX
00757E23  EB 81                     JMP 0x00757da6
LAB_00757e25:
00757E25  5F                        POP EDI
00757E26  5E                        POP ESI
00757E27  33 C0                     XOR EAX,EAX
00757E29  5B                        POP EBX
00757E2A  5D                        POP EBP
00757E2B  C2 04 00                  RET 0x4
LAB_00757e2e:
00757E2E  8B 9F A6 01 00 00         MOV EBX,dword ptr [EDI + 0x1a6]
00757E34  83 7B 5C 00               CMP dword ptr [EBX + 0x5c],0x0
00757E38  74 07                     JZ 0x00757e41
00757E3A  C7 43 5C 00 00 00 00      MOV dword ptr [EBX + 0x5c],0x0
LAB_00757e41:
00757E41  89 97 8E 01 00 00         MOV dword ptr [EDI + 0x18e],EDX
00757E47  89 0E                     MOV dword ptr [ESI],ECX
00757E49  89 46 04                  MOV dword ptr [ESI + 0x4],EAX
00757E4C  5F                        POP EDI
00757E4D  5E                        POP ESI
00757E4E  B8 01 00 00 00            MOV EAX,0x1
00757E53  5B                        POP EBX
00757E54  5D                        POP EBP
00757E55  C2 04 00                  RET 0x4
