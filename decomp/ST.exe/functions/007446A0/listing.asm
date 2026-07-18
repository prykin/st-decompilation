FUN_007446a0:
007446A0  55                        PUSH EBP
007446A1  8B EC                     MOV EBP,ESP
007446A3  83 EC 08                  SUB ESP,0x8
007446A6  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
007446AD  C7 45 F8 03 00 00 00      MOV dword ptr [EBP + -0x8],0x3
007446B4  EB 09                     JMP 0x007446bf
LAB_007446b6:
007446B6  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
007446B9  83 C0 01                  ADD EAX,0x1
007446BC  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_007446bf:
007446BF  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
007446C2  3B 0D 80 A1 85 00         CMP ECX,dword ptr [0x0085a180]
007446C8  7D 7B                     JGE 0x00744745
007446CA  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
007446CD  A1 40 8E 85 00            MOV EAX,[0x00858e40]
007446D2  83 3C 90 00               CMP dword ptr [EAX + EDX*0x4],0x0
007446D6  74 68                     JZ 0x00744740
007446D8  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
007446DB  8B 15 40 8E 85 00         MOV EDX,dword ptr [0x00858e40]
007446E1  8B 04 8A                  MOV EAX,dword ptr [EDX + ECX*0x4]
007446E4  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
007446E7  81 E1 83 00 00 00         AND ECX,0x83
007446ED  85 C9                     TEST ECX,ECX
007446EF  74 22                     JZ 0x00744713
007446F1  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
007446F4  A1 40 8E 85 00            MOV EAX,[0x00858e40]
007446F9  8B 0C 90                  MOV ECX,dword ptr [EAX + EDX*0x4]
007446FC  51                        PUSH ECX
007446FD  E8 8E A3 FE FF            CALL 0x0072ea90
00744702  83 C4 04                  ADD ESP,0x4
00744705  83 F8 FF                  CMP EAX,-0x1
00744708  74 09                     JZ 0x00744713
0074470A  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0074470D  83 C2 01                  ADD EDX,0x1
00744710  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_00744713:
00744713  83 7D F8 14               CMP dword ptr [EBP + -0x8],0x14
00744717  7C 27                     JL 0x00744740
00744719  6A 02                     PUSH 0x2
0074471B  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0074471E  8B 0D 40 8E 85 00         MOV ECX,dword ptr [0x00858e40]
00744724  8B 14 81                  MOV EDX,dword ptr [ECX + EAX*0x4]
00744727  52                        PUSH EDX
00744728  E8 DF FD CB FF            CALL 0x0040450c
0074472D  83 C4 08                  ADD ESP,0x8
00744730  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00744733  8B 0D 40 8E 85 00         MOV ECX,dword ptr [0x00858e40]
00744739  C7 04 81 00 00 00 00      MOV dword ptr [ECX + EAX*0x4],0x0
LAB_00744740:
00744740  E9 71 FF FF FF            JMP 0x007446b6
LAB_00744745:
00744745  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00744748  8B E5                     MOV ESP,EBP
0074474A  5D                        POP EBP
0074474B  C3                        RET
