FUN_0073b320:
0073B320  55                        PUSH EBP
0073B321  8B EC                     MOV EBP,ESP
0073B323  83 EC 08                  SUB ESP,0x8
0073B326  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
LAB_0073b32d:
0073B32D  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0073B330  8A 08                     MOV CL,byte ptr [EAX]
0073B332  88 4D F8                  MOV byte ptr [EBP + -0x8],CL
0073B335  0F BE 55 F8               MOVSX EDX,byte ptr [EBP + -0x8]
0073B339  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0073B33C  83 C0 01                  ADD EAX,0x1
0073B33F  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0073B342  85 D2                     TEST EDX,EDX
0073B344  74 49                     JZ 0x0073b38f
0073B346  0F BE 4D F8               MOVSX ECX,byte ptr [EBP + -0x8]
0073B34A  83 F9 61                  CMP ECX,0x61
0073B34D  7C 13                     JL 0x0073b362
0073B34F  0F BE 55 F8               MOVSX EDX,byte ptr [EBP + -0x8]
0073B353  83 FA 66                  CMP EDX,0x66
0073B356  7F 0A                     JG 0x0073b362
0073B358  8A 45 F8                  MOV AL,byte ptr [EBP + -0x8]
0073B35B  04 D9                     ADD AL,0xd9
0073B35D  88 45 F8                  MOV byte ptr [EBP + -0x8],AL
0073B360  EB 1A                     JMP 0x0073b37c
LAB_0073b362:
0073B362  0F BE 4D F8               MOVSX ECX,byte ptr [EBP + -0x8]
0073B366  83 F9 41                  CMP ECX,0x41
0073B369  7C 11                     JL 0x0073b37c
0073B36B  0F BE 55 F8               MOVSX EDX,byte ptr [EBP + -0x8]
0073B36F  83 FA 46                  CMP EDX,0x46
0073B372  7F 08                     JG 0x0073b37c
0073B374  8A 45 F8                  MOV AL,byte ptr [EBP + -0x8]
0073B377  04 F9                     ADD AL,0xf9
0073B379  88 45 F8                  MOV byte ptr [EBP + -0x8],AL
LAB_0073b37c:
0073B37C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073B37F  C1 E1 04                  SHL ECX,0x4
0073B382  0F BE 55 F8               MOVSX EDX,byte ptr [EBP + -0x8]
0073B386  8D 44 11 D0               LEA EAX,[ECX + EDX*0x1 + -0x30]
0073B38A  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0073B38D  EB 9E                     JMP 0x0073b32d
LAB_0073b38f:
0073B38F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073B392  8B E5                     MOV ESP,EBP
0073B394  5D                        POP EBP
0073B395  C3                        RET
