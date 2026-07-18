FUN_00721830:
00721830  55                        PUSH EBP
00721831  8B EC                     MOV EBP,ESP
00721833  51                        PUSH ECX
00721834  53                        PUSH EBX
00721835  8B D9                     MOV EBX,ECX
00721837  56                        PUSH ESI
00721838  57                        PUSH EDI
00721839  8B 83 38 01 00 00         MOV EAX,dword ptr [EBX + 0x138]
0072183F  85 C0                     TEST EAX,EAX
00721841  0F 84 47 01 00 00         JZ 0x0072198e
00721847  8B 43 20                  MOV EAX,dword ptr [EBX + 0x20]
0072184A  A8 40                     TEST AL,0x40
0072184C  74 28                     JZ 0x00721876
0072184E  A8 80                     TEST AL,0x80
00721850  74 11                     JZ 0x00721863
00721852  E8 39 FF FF FF            CALL 0x00721790
00721857  3B 83 34 01 00 00         CMP EAX,dword ptr [EBX + 0x134]
0072185D  0F 83 2B 01 00 00         JNC 0x0072198e
LAB_00721863:
00721863  8B CB                     MOV ECX,EBX
00721865  E8 76 FF FF FF            CALL 0x007217e0
0072186A  3B 83 34 01 00 00         CMP EAX,dword ptr [EBX + 0x134]
00721870  0F 83 18 01 00 00         JNC 0x0072198e
LAB_00721876:
00721876  8B 83 38 01 00 00         MOV EAX,dword ptr [EBX + 0x138]
0072187C  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
0072187F  85 C9                     TEST ECX,ECX
00721881  75 0D                     JNZ 0x00721890
00721883  8B 0D 04 0B 7F 00         MOV ECX,dword ptr [0x007f0b04]
00721889  51                        PUSH ECX
0072188A  50                        PUSH EAX
0072188B  E8 10 42 F9 FF            CALL 0x006b5aa0
LAB_00721890:
00721890  8B 93 44 01 00 00         MOV EDX,dword ptr [EBX + 0x144]
00721896  8B 83 0C 02 00 00         MOV EAX,dword ptr [EBX + 0x20c]
0072189C  8B 8B 38 01 00 00         MOV ECX,dword ptr [EBX + 0x138]
007218A2  03 C2                     ADD EAX,EDX
007218A4  3B 41 08                  CMP EAX,dword ptr [ECX + 0x8]
007218A7  7D 08                     JGE 0x007218b1
007218A9  8B 49 14                  MOV ECX,dword ptr [ECX + 0x14]
007218AC  8B 34 81                  MOV ESI,dword ptr [ECX + EAX*0x4]
007218AF  EB 02                     JMP 0x007218b3
LAB_007218b1:
007218B1  33 F6                     XOR ESI,ESI
LAB_007218b3:
007218B3  8B 43 20                  MOV EAX,dword ptr [EBX + 0x20]
007218B6  A8 01                     TEST AL,0x1
007218B8  74 37                     JZ 0x007218f1
007218BA  A8 80                     TEST AL,0x80
007218BC  74 19                     JZ 0x007218d7
007218BE  8B FE                     MOV EDI,ESI
007218C0  83 C9 FF                  OR ECX,0xffffffff
007218C3  33 C0                     XOR EAX,EAX
007218C5  F2 AE                     SCASB.REPNE ES:EDI
007218C7  8B 83 34 01 00 00         MOV EAX,dword ptr [EBX + 0x134]
007218CD  F7 D1                     NOT ECX
007218CF  3B C8                     CMP ECX,EAX
007218D1  0F 83 B7 00 00 00         JNC 0x0072198e
LAB_007218d7:
007218D7  8B FE                     MOV EDI,ESI
007218D9  83 C9 FF                  OR ECX,0xffffffff
007218DC  33 C0                     XOR EAX,EAX
007218DE  F2 AE                     SCASB.REPNE ES:EDI
007218E0  8B 83 34 01 00 00         MOV EAX,dword ptr [EBX + 0x134]
007218E6  F7 D1                     NOT ECX
007218E8  49                        DEC ECX
007218E9  3B C8                     CMP ECX,EAX
007218EB  0F 83 9D 00 00 00         JNC 0x0072198e
LAB_007218f1:
007218F1  8B FE                     MOV EDI,ESI
007218F3  83 C9 FF                  OR ECX,0xffffffff
007218F6  33 C0                     XOR EAX,EAX
007218F8  F2 AE                     SCASB.REPNE ES:EDI
007218FA  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
007218FD  F7 D1                     NOT ECX
007218FF  49                        DEC ECX
00721900  8B D1                     MOV EDX,ECX
00721902  83 C9 FF                  OR ECX,0xffffffff
00721905  F2 AE                     SCASB.REPNE ES:EDI
00721907  F7 D1                     NOT ECX
00721909  49                        DEC ECX
0072190A  8D 44 0A 02               LEA EAX,[EDX + ECX*0x1 + 0x2]
0072190E  50                        PUSH EAX
0072190F  E8 FC 92 F8 FF            CALL 0x006aac10
00721914  8B D0                     MOV EDX,EAX
00721916  8B FE                     MOV EDI,ESI
00721918  83 C9 FF                  OR ECX,0xffffffff
0072191B  33 C0                     XOR EAX,EAX
0072191D  F2 AE                     SCASB.REPNE ES:EDI
0072191F  F7 D1                     NOT ECX
00721921  2B F9                     SUB EDI,ECX
00721923  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00721926  8B C1                     MOV EAX,ECX
00721928  8B F7                     MOV ESI,EDI
0072192A  8B FA                     MOV EDI,EDX
0072192C  C1 E9 02                  SHR ECX,0x2
0072192F  F3 A5                     MOVSD.REP ES:EDI,ESI
00721931  8B C8                     MOV ECX,EAX
00721933  83 E1 03                  AND ECX,0x3
00721936  F3 A4                     MOVSB.REP ES:EDI,ESI
00721938  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0072193B  8A 01                     MOV AL,byte ptr [ECX]
0072193D  8B 8B 48 01 00 00         MOV ECX,dword ptr [EBX + 0x148]
00721943  50                        PUSH EAX
00721944  8B 83 10 02 00 00         MOV EAX,dword ptr [EBX + 0x210]
0072194A  03 C8                     ADD ECX,EAX
0072194C  51                        PUSH ECX
0072194D  52                        PUSH EDX
0072194E  E8 FD 16 03 00            CALL 0x00753050
00721953  8B 93 44 01 00 00         MOV EDX,dword ptr [EBX + 0x144]
00721959  8B 83 0C 02 00 00         MOV EAX,dword ptr [EBX + 0x20c]
0072195F  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00721962  03 D0                     ADD EDX,EAX
00721964  8B 83 38 01 00 00         MOV EAX,dword ptr [EBX + 0x138]
0072196A  56                        PUSH ESI
0072196B  52                        PUSH EDX
0072196C  50                        PUSH EAX
0072196D  E8 AE 46 F9 FF            CALL 0x006b6020
00721972  56                        PUSH ESI
00721973  E8 18 45 F8 FF            CALL 0x006a5e90
00721978  8B 93 10 02 00 00         MOV EDX,dword ptr [EBX + 0x210]
0072197E  8B 8B 0C 02 00 00         MOV ECX,dword ptr [EBX + 0x20c]
00721984  42                        INC EDX
00721985  51                        PUSH ECX
00721986  52                        PUSH EDX
00721987  8B CB                     MOV ECX,EBX
00721989  E8 F2 F6 FF FF            CALL 0x00721080
LAB_0072198e:
0072198E  5F                        POP EDI
0072198F  5E                        POP ESI
00721990  33 C0                     XOR EAX,EAX
00721992  5B                        POP EBX
00721993  8B E5                     MOV ESP,EBP
00721995  5D                        POP EBP
00721996  C2 04 00                  RET 0x4
