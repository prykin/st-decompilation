FUN_006755e0:
006755E0  55                        PUSH EBP
006755E1  8B EC                     MOV EBP,ESP
006755E3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006755E6  83 F8 32                  CMP EAX,0x32
006755E9  7C 0B                     JL 0x006755f6
006755EB  83 F8 74                  CMP EAX,0x74
006755EE  7D 06                     JGE 0x006755f6
006755F0  66 B8 01 00               MOV AX,0x1
006755F4  5D                        POP EBP
006755F5  C3                        RET
LAB_006755f6:
006755F6  83 F8 08                  CMP EAX,0x8
006755F9  0F 84 8D 00 00 00         JZ 0x0067568c
006755FF  83 F8 14                  CMP EAX,0x14
00675602  0F 84 84 00 00 00         JZ 0x0067568c
00675608  83 F8 1A                  CMP EAX,0x1a
0067560B  74 7F                     JZ 0x0067568c
0067560D  83 F8 19                  CMP EAX,0x19
00675610  74 74                     JZ 0x00675686
00675612  83 F8 0C                  CMP EAX,0xc
00675615  74 6F                     JZ 0x00675686
00675617  83 F8 18                  CMP EAX,0x18
0067561A  74 6A                     JZ 0x00675686
0067561C  83 F8 07                  CMP EAX,0x7
0067561F  74 5F                     JZ 0x00675680
00675621  83 F8 13                  CMP EAX,0x13
00675624  74 5A                     JZ 0x00675680
00675626  83 F8 1B                  CMP EAX,0x1b
00675629  74 55                     JZ 0x00675680
0067562B  83 F8 05                  CMP EAX,0x5
0067562E  74 4A                     JZ 0x0067567a
00675630  83 F8 11                  CMP EAX,0x11
00675633  74 45                     JZ 0x0067567a
00675635  83 F8 21                  CMP EAX,0x21
00675638  74 40                     JZ 0x0067567a
0067563A  83 F8 06                  CMP EAX,0x6
0067563D  74 35                     JZ 0x00675674
0067563F  83 F8 12                  CMP EAX,0x12
00675642  74 30                     JZ 0x00675674
00675644  83 F8 22                  CMP EAX,0x22
00675647  74 2B                     JZ 0x00675674
00675649  83 F8 09                  CMP EAX,0x9
0067564C  74 20                     JZ 0x0067566e
0067564E  83 F8 15                  CMP EAX,0x15
00675651  74 1B                     JZ 0x0067566e
00675653  83 F8 04                  CMP EAX,0x4
00675656  74 10                     JZ 0x00675668
00675658  83 F8 16                  CMP EAX,0x16
0067565B  74 0B                     JZ 0x00675668
0067565D  83 F8 1C                  CMP EAX,0x1c
00675660  74 06                     JZ 0x00675668
00675662  66 B8 10 00               MOV AX,0x10
00675666  5D                        POP EBP
00675667  C3                        RET
LAB_00675668:
00675668  66 B8 20 00               MOV AX,0x20
0067566C  5D                        POP EBP
0067566D  C3                        RET
LAB_0067566e:
0067566E  66 B8 00 01               MOV AX,0x100
00675672  5D                        POP EBP
00675673  C3                        RET
LAB_00675674:
00675674  66 B8 80 00               MOV AX,0x80
00675678  5D                        POP EBP
00675679  C3                        RET
LAB_0067567a:
0067567A  66 B8 40 00               MOV AX,0x40
0067567E  5D                        POP EBP
0067567F  C3                        RET
LAB_00675680:
00675680  66 B8 08 00               MOV AX,0x8
00675684  5D                        POP EBP
00675685  C3                        RET
LAB_00675686:
00675686  66 B8 04 00               MOV AX,0x4
0067568A  5D                        POP EBP
0067568B  C3                        RET
LAB_0067568c:
0067568C  66 B8 02 00               MOV AX,0x2
00675690  5D                        POP EBP
00675691  C3                        RET
