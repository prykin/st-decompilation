___add_12:
00744910  55                        PUSH EBP
00744911  8B EC                     MOV EBP,ESP
00744913  83 EC 0C                  SUB ESP,0xc
00744916  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00744919  50                        PUSH EAX
0074491A  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0074491D  8B 11                     MOV EDX,dword ptr [ECX]
0074491F  52                        PUSH EDX
00744920  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00744923  8B 08                     MOV ECX,dword ptr [EAX]
00744925  51                        PUSH ECX
00744926  E8 A5 FF FF FF            CALL 0x007448d0
0074492B  83 C4 0C                  ADD ESP,0xc
0074492E  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00744931  83 7D FC 00               CMP dword ptr [EBP + -0x4],0x0
00744935  74 30                     JZ 0x00744967
00744937  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0074493A  83 C2 04                  ADD EDX,0x4
0074493D  52                        PUSH EDX
0074493E  6A 01                     PUSH 0x1
00744940  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00744943  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
00744946  51                        PUSH ECX
00744947  E8 84 FF FF FF            CALL 0x007448d0
0074494C  83 C4 0C                  ADD ESP,0xc
0074494F  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00744952  83 7D F8 00               CMP dword ptr [EBP + -0x8],0x0
00744956  74 0F                     JZ 0x00744967
00744958  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0074495B  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
0074495E  83 C0 01                  ADD EAX,0x1
00744961  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00744964  89 41 08                  MOV dword ptr [ECX + 0x8],EAX
LAB_00744967:
00744967  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0074496A  83 C2 04                  ADD EDX,0x4
0074496D  52                        PUSH EDX
0074496E  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00744971  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
00744974  51                        PUSH ECX
00744975  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00744978  8B 42 04                  MOV EAX,dword ptr [EDX + 0x4]
0074497B  50                        PUSH EAX
0074497C  E8 4F FF FF FF            CALL 0x007448d0
00744981  83 C4 0C                  ADD ESP,0xc
00744984  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00744987  83 7D F4 00               CMP dword ptr [EBP + -0xc],0x0
0074498B  74 0F                     JZ 0x0074499c
0074498D  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00744990  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
00744993  83 C2 01                  ADD EDX,0x1
00744996  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00744999  89 50 08                  MOV dword ptr [EAX + 0x8],EDX
LAB_0074499c:
0074499C  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0074499F  83 C1 08                  ADD ECX,0x8
007449A2  51                        PUSH ECX
007449A3  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
007449A6  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
007449A9  50                        PUSH EAX
007449AA  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
007449AD  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
007449B0  52                        PUSH EDX
007449B1  E8 1A FF FF FF            CALL 0x007448d0
007449B6  83 C4 0C                  ADD ESP,0xc
007449B9  8B E5                     MOV ESP,EBP
007449BB  5D                        POP EBP
007449BC  C3                        RET
