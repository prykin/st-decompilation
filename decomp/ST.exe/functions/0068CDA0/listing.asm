FUN_0068cda0:
0068CDA0  55                        PUSH EBP
0068CDA1  8B EC                     MOV EBP,ESP
0068CDA3  56                        PUSH ESI
0068CDA4  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0068CDA7  8B 06                     MOV EAX,dword ptr [ESI]
0068CDA9  85 C0                     TEST EAX,EAX
0068CDAB  74 6F                     JZ 0x0068ce1c
0068CDAD  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0068CDB0  49                        DEC ECX
0068CDB1  83 F9 3F                  CMP ECX,0x3f
0068CDB4  77 66                     JA 0x0068ce1c
0068CDB6  33 D2                     XOR EDX,EDX
0068CDB8  8A 91 40 CE 68 00         MOV DL,byte ptr [ECX + 0x68ce40]
switchD_0068cdbe::switchD:
0068CDBE  FF 24 95 20 CE 68 00      JMP dword ptr [EDX*0x4 + 0x68ce20]
switchD_0068cdbe::caseD_1:
0068CDC5  56                        PUSH ESI
0068CDC6  E8 02 8E D7 FF            CALL 0x00405bcd
0068CDCB  83 C4 04                  ADD ESP,0x4
0068CDCE  5E                        POP ESI
0068CDCF  5D                        POP EBP
0068CDD0  C3                        RET
switchD_0068cdbe::caseD_2:
0068CDD1  56                        PUSH ESI
0068CDD2  E8 29 60 D7 FF            CALL 0x00402e00
0068CDD7  83 C4 04                  ADD ESP,0x4
0068CDDA  5E                        POP ESI
0068CDDB  5D                        POP EBP
0068CDDC  C3                        RET
switchD_0068cdbe::caseD_3:
0068CDDD  56                        PUSH ESI
0068CDDE  E8 22 60 D7 FF            CALL 0x00402e05
0068CDE3  83 C4 04                  ADD ESP,0x4
0068CDE6  5E                        POP ESI
0068CDE7  5D                        POP EBP
0068CDE8  C3                        RET
switchD_0068cdbe::caseD_4:
0068CDE9  56                        PUSH ESI
0068CDEA  E8 B5 52 D7 FF            CALL 0x004020a4
0068CDEF  83 C4 04                  ADD ESP,0x4
0068CDF2  5E                        POP ESI
0068CDF3  5D                        POP EBP
0068CDF4  C3                        RET
switchD_0068cdbe::caseD_5:
0068CDF5  56                        PUSH ESI
0068CDF6  E8 3C 47 D7 FF            CALL 0x00401537
0068CDFB  83 C4 04                  ADD ESP,0x4
0068CDFE  5E                        POP ESI
0068CDFF  5D                        POP EBP
0068CE00  C3                        RET
switchD_0068cdbe::caseD_9:
0068CE01  50                        PUSH EAX
0068CE02  E8 69 87 02 00            CALL 0x006b5570
0068CE07  C7 06 00 00 00 00         MOV dword ptr [ESI],0x0
0068CE0D  5E                        POP ESI
0068CE0E  5D                        POP EBP
0068CE0F  C3                        RET
switchD_0068cdbe::caseD_a:
0068CE10  50                        PUSH EAX
0068CE11  E8 FA 12 02 00            CALL 0x006ae110
0068CE16  C7 06 00 00 00 00         MOV dword ptr [ESI],0x0
switchD_0068cdbe::caseD_6:
0068CE1C  5E                        POP ESI
0068CE1D  5D                        POP EBP
0068CE1E  C3                        RET
