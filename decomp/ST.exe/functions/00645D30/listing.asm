FUN_00645d30:
00645D30  55                        PUSH EBP
00645D31  8B EC                     MOV EBP,ESP
00645D33  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00645D39  56                        PUSH ESI
00645D3A  57                        PUSH EDI
00645D3B  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00645D3E  57                        PUSH EDI
00645D3F  33 F6                     XOR ESI,ESI
00645D41  E8 71 EC DB FF            CALL 0x004049b7
00645D46  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00645D49  25 FF 00 00 00            AND EAX,0xff
00645D4E  81 C1 6A FF FF FF         ADD ECX,0xffffff6a
00645D54  83 F9 2C                  CMP ECX,0x2c
00645D57  0F 87 E9 00 00 00         JA 0x00645e46
00645D5D  33 D2                     XOR EDX,EDX
00645D5F  8A 91 74 5E 64 00         MOV DL,byte ptr [ECX + 0x645e74]
switchD_00645d65::switchD:
00645D65  FF 24 95 50 5E 64 00      JMP dword ptr [EDX*0x4 + 0x645e50]
switchD_00645d65::caseD_96:
00645D6C  48                        DEC EAX
00645D6D  74 1E                     JZ 0x00645d8d
00645D6F  48                        DEC EAX
00645D70  0F 85 D2 00 00 00         JNZ 0x00645e48
00645D76  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00645D7C  68 83 00 00 00            PUSH 0x83
00645D81  57                        PUSH EDI
00645D82  E8 E4 BA DB FF            CALL 0x0040186b
00645D87  8B F0                     MOV ESI,EAX
00645D89  5F                        POP EDI
00645D8A  5E                        POP ESI
00645D8B  5D                        POP EBP
00645D8C  C3                        RET
LAB_00645d8d:
00645D8D  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00645D93  6A 06                     PUSH 0x6
00645D95  57                        PUSH EDI
00645D96  E8 D0 BA DB FF            CALL 0x0040186b
00645D9B  8B F0                     MOV ESI,EAX
00645D9D  5F                        POP EDI
00645D9E  5E                        POP ESI
00645D9F  5D                        POP EBP
00645DA0  C3                        RET
switchD_00645d65::caseD_9a:
00645DA1  83 E8 02                  SUB EAX,0x2
00645DA4  0F 85 9E 00 00 00         JNZ 0x00645e48
00645DAA  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00645DB0  68 93 00 00 00            PUSH 0x93
00645DB5  57                        PUSH EDI
00645DB6  E8 B0 BA DB FF            CALL 0x0040186b
00645DBB  8B F0                     MOV ESI,EAX
00645DBD  5F                        POP EDI
00645DBE  5E                        POP ESI
00645DBF  5D                        POP EBP
00645DC0  C3                        RET
switchD_00645d65::caseD_9f:
00645DC1  48                        DEC EAX
00645DC2  0F 85 80 00 00 00         JNZ 0x00645e48
00645DC8  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00645DCE  68 97 00 00 00            PUSH 0x97
00645DD3  57                        PUSH EDI
00645DD4  E8 92 BA DB FF            CALL 0x0040186b
00645DD9  8B F0                     MOV ESI,EAX
00645DDB  5F                        POP EDI
00645DDC  5E                        POP ESI
00645DDD  5D                        POP EBP
00645DDE  C3                        RET
switchD_00645d65::caseD_ac:
00645DDF  83 E8 02                  SUB EAX,0x2
00645DE2  75 64                     JNZ 0x00645e48
00645DE4  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00645DEA  68 95 00 00 00            PUSH 0x95
00645DEF  57                        PUSH EDI
00645DF0  E8 76 BA DB FF            CALL 0x0040186b
00645DF5  8B F0                     MOV ESI,EAX
00645DF7  5F                        POP EDI
00645DF8  5E                        POP ESI
00645DF9  5D                        POP EBP
00645DFA  C3                        RET
switchD_00645d65::caseD_ad:
00645DFB  83 F8 03                  CMP EAX,0x3
00645DFE  75 48                     JNZ 0x00645e48
00645E00  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00645E06  6A 7D                     PUSH 0x7d
00645E08  57                        PUSH EDI
00645E09  E8 5D BA DB FF            CALL 0x0040186b
00645E0E  8B F0                     MOV ESI,EAX
00645E10  5F                        POP EDI
00645E11  5E                        POP ESI
00645E12  5D                        POP EBP
00645E13  C3                        RET
switchD_00645d65::caseD_b0:
00645E14  83 F8 03                  CMP EAX,0x3
00645E17  75 2F                     JNZ 0x00645e48
00645E19  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00645E1F  6A 7A                     PUSH 0x7a
00645E21  57                        PUSH EDI
00645E22  E8 44 BA DB FF            CALL 0x0040186b
00645E27  8B F0                     MOV ESI,EAX
00645E29  5F                        POP EDI
00645E2A  5E                        POP ESI
00645E2B  5D                        POP EBP
00645E2C  C3                        RET
switchD_00645d65::caseD_b8:
00645E2D  83 F8 03                  CMP EAX,0x3
00645E30  75 16                     JNZ 0x00645e48
00645E32  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00645E38  6A 76                     PUSH 0x76
00645E3A  57                        PUSH EDI
00645E3B  E8 2B BA DB FF            CALL 0x0040186b
00645E40  8B F0                     MOV ESI,EAX
00645E42  5F                        POP EDI
00645E43  5E                        POP ESI
00645E44  5D                        POP EBP
00645E45  C3                        RET
switchD_00645d65::caseD_99:
00645E46  33 F6                     XOR ESI,ESI
LAB_00645e48:
00645E48  8B C6                     MOV EAX,ESI
00645E4A  5F                        POP EDI
00645E4B  5E                        POP ESI
00645E4C  5D                        POP EBP
00645E4D  C3                        RET
