FUN_00694100:
00694100  56                        PUSH ESI
00694101  57                        PUSH EDI
00694102  8B F1                     MOV ESI,ECX
00694104  33 FF                     XOR EDI,EDI
LAB_00694106:
00694106  57                        PUSH EDI
00694107  8B CE                     MOV ECX,ESI
00694109  E8 DF 09 D7 FF            CALL 0x00404aed
0069410E  85 C0                     TEST EAX,EAX
00694110  75 68                     JNZ 0x0069417a
00694112  C7 86 9D 19 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x199d],0xffffffff
LAB_0069411c:
0069411C  8B 96 9D 19 00 00         MOV EDX,dword ptr [ESI + 0x199d]
00694122  42                        INC EDX
00694123  8B C2                     MOV EAX,EDX
00694125  89 96 9D 19 00 00         MOV dword ptr [ESI + 0x199d],EDX
0069412B  83 F8 08                  CMP EAX,0x8
0069412E  7D 4A                     JGE 0x0069417a
LAB_00694130:
00694130  50                        PUSH EAX
00694131  8B CE                     MOV ECX,ESI
00694133  E8 DB F7 D6 FF            CALL 0x00403913
00694138  85 C0                     TEST EAX,EAX
0069413A  75 16                     JNZ 0x00694152
0069413C  8B 96 9D 19 00 00         MOV EDX,dword ptr [ESI + 0x199d]
00694142  42                        INC EDX
00694143  8B C2                     MOV EAX,EDX
00694145  89 96 9D 19 00 00         MOV dword ptr [ESI + 0x199d],EDX
0069414B  83 F8 08                  CMP EAX,0x8
0069414E  7D 2A                     JGE 0x0069417a
00694150  EB DE                     JMP 0x00694130
LAB_00694152:
00694152  8B 86 9D 19 00 00         MOV EAX,dword ptr [ESI + 0x199d]
00694158  8B CE                     MOV ECX,ESI
0069415A  50                        PUSH EAX
0069415B  E8 B3 F7 D6 FF            CALL 0x00403913
00694160  85 C0                     TEST EAX,EAX
00694162  74 16                     JZ 0x0069417a
00694164  8A 48 23                  MOV CL,byte ptr [EAX + 0x23]
00694167  8B D1                     MOV EDX,ECX
00694169  81 E2 FF 00 00 00         AND EDX,0xff
0069416F  3B D7                     CMP EDX,EDI
00694171  7E A9                     JLE 0x0069411c
00694173  FE C9                     DEC CL
00694175  88 48 23                  MOV byte ptr [EAX + 0x23],CL
00694178  EB A2                     JMP 0x0069411c
LAB_0069417a:
0069417A  47                        INC EDI
0069417B  83 FF 08                  CMP EDI,0x8
0069417E  7C 86                     JL 0x00694106
00694180  5F                        POP EDI
00694181  5E                        POP ESI
00694182  C3                        RET
