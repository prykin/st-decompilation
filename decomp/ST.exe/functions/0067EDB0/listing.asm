FUN_0067edb0:
0067EDB0  55                        PUSH EBP
0067EDB1  8B EC                     MOV EBP,ESP
0067EDB3  A1 18 8A 84 00            MOV EAX,[0x00848a18]
0067EDB8  53                        PUSH EBX
0067EDB9  56                        PUSH ESI
0067EDBA  57                        PUSH EDI
0067EDBB  8B 40 08                  MOV EAX,dword ptr [EAX + 0x8]
0067EDBE  33 FF                     XOR EDI,EDI
0067EDC0  85 C0                     TEST EAX,EAX
0067EDC2  7E 49                     JLE 0x0067ee0d
0067EDC4  3B F8                     CMP EDI,EAX
0067EDC6  7D 0E                     JGE 0x0067edd6
LAB_0067edc8:
0067EDC8  8B 0D 18 8A 84 00         MOV ECX,dword ptr [0x00848a18]
0067EDCE  8B 51 14                  MOV EDX,dword ptr [ECX + 0x14]
0067EDD1  8B 34 BA                  MOV ESI,dword ptr [EDX + EDI*0x4]
0067EDD4  EB 02                     JMP 0x0067edd8
LAB_0067edd6:
0067EDD6  33 F6                     XOR ESI,ESI
LAB_0067edd8:
0067EDD8  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
LAB_0067eddb:
0067EDDB  8A 19                     MOV BL,byte ptr [ECX]
0067EDDD  8A D3                     MOV DL,BL
0067EDDF  3A 1E                     CMP BL,byte ptr [ESI]
0067EDE1  75 1C                     JNZ 0x0067edff
0067EDE3  84 D2                     TEST DL,DL
0067EDE5  74 14                     JZ 0x0067edfb
0067EDE7  8A 59 01                  MOV BL,byte ptr [ECX + 0x1]
0067EDEA  8A D3                     MOV DL,BL
0067EDEC  3A 5E 01                  CMP BL,byte ptr [ESI + 0x1]
0067EDEF  75 0E                     JNZ 0x0067edff
0067EDF1  83 C1 02                  ADD ECX,0x2
0067EDF4  83 C6 02                  ADD ESI,0x2
0067EDF7  84 D2                     TEST DL,DL
0067EDF9  75 E0                     JNZ 0x0067eddb
LAB_0067edfb:
0067EDFB  33 C9                     XOR ECX,ECX
0067EDFD  EB 05                     JMP 0x0067ee04
LAB_0067edff:
0067EDFF  1B C9                     SBB ECX,ECX
0067EE01  83 D9 FF                  SBB ECX,-0x1
LAB_0067ee04:
0067EE04  85 C9                     TEST ECX,ECX
0067EE06  74 0D                     JZ 0x0067ee15
0067EE08  47                        INC EDI
0067EE09  3B F8                     CMP EDI,EAX
0067EE0B  7C BB                     JL 0x0067edc8
LAB_0067ee0d:
0067EE0D  5F                        POP EDI
0067EE0E  5E                        POP ESI
0067EE0F  83 C8 FF                  OR EAX,0xffffffff
0067EE12  5B                        POP EBX
0067EE13  5D                        POP EBP
0067EE14  C3                        RET
LAB_0067ee15:
0067EE15  8B C7                     MOV EAX,EDI
0067EE17  5F                        POP EDI
0067EE18  5E                        POP ESI
0067EE19  5B                        POP EBX
0067EE1A  5D                        POP EBP
0067EE1B  C3                        RET
