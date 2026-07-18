FUN_00734930:
00734930  55                        PUSH EBP
00734931  8B EC                     MOV EBP,ESP
00734933  83 EC 08                  SUB ESP,0x8
00734936  83 3D 8C 14 7F 00 01      CMP dword ptr [0x007f148c],0x1
0073493D  7E 16                     JLE 0x00734955
0073493F  68 03 01 00 00            PUSH 0x103
00734944  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00734947  50                        PUSH EAX
00734948  E8 C3 BC FF FF            CALL 0x00730610
0073494D  83 C4 08                  ADD ESP,0x8
00734950  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00734953  EB 17                     JMP 0x0073496c
LAB_00734955:
00734955  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00734958  8B 15 80 12 7F 00         MOV EDX,dword ptr [0x007f1280]
0073495E  33 C0                     XOR EAX,EAX
00734960  66 8B 04 4A               MOV AX,word ptr [EDX + ECX*0x2]
00734964  25 03 01 00 00            AND EAX,0x103
00734969  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0073496c:
0073496C  83 7D FC 00               CMP dword ptr [EBP + -0x4],0x0
00734970  75 0F                     JNZ 0x00734981
00734972  83 7D 08 5F               CMP dword ptr [EBP + 0x8],0x5f
00734976  74 09                     JZ 0x00734981
00734978  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
0073497F  EB 07                     JMP 0x00734988
LAB_00734981:
00734981  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
LAB_00734988:
00734988  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0073498B  8B E5                     MOV ESP,EBP
0073498D  5D                        POP EBP
0073498E  C3                        RET
