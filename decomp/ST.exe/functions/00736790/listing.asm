FUN_00736790:
00736790  55                        PUSH EBP
00736791  8B EC                     MOV EBP,ESP
00736793  81 EC 1C 05 00 00         SUB ESP,0x51c
00736799  8D 85 E8 FC FF FF         LEA EAX,[EBP + 0xfffffce8]
0073679F  50                        PUSH EAX
007367A0  8B 0D E0 A2 85 00         MOV ECX,dword ptr [0x0085a2e0]
007367A6  51                        PUSH ECX
007367A7  FF 15 FC BB 85 00         CALL dword ptr [0x0085bbfc]
007367AD  83 F8 01                  CMP EAX,0x1
007367B0  0F 85 13 02 00 00         JNZ 0x007369c9
007367B6  C7 85 E4 FA FF FF 00 00 00 00  MOV dword ptr [EBP + 0xfffffae4],0x0
007367C0  EB 0F                     JMP 0x007367d1
LAB_007367c2:
007367C2  8B 95 E4 FA FF FF         MOV EDX,dword ptr [EBP + 0xfffffae4]
007367C8  83 C2 01                  ADD EDX,0x1
007367CB  89 95 E4 FA FF FF         MOV dword ptr [EBP + 0xfffffae4],EDX
LAB_007367d1:
007367D1  81 BD E4 FA FF FF 00 01 00 00  CMP dword ptr [EBP + 0xfffffae4],0x100
007367DB  73 15                     JNC 0x007367f2
007367DD  8B 85 E4 FA FF FF         MOV EAX,dword ptr [EBP + 0xfffffae4]
007367E3  8A 8D E4 FA FF FF         MOV CL,byte ptr [EBP + 0xfffffae4]
007367E9  88 8C 05 FC FC FF FF      MOV byte ptr [EBP + EAX*0x1 + 0xfffffcfc],CL
007367F0  EB D0                     JMP 0x007367c2
LAB_007367f2:
007367F2  C6 85 FC FC FF FF 20      MOV byte ptr [EBP + 0xfffffcfc],0x20
007367F9  8D 95 EE FC FF FF         LEA EDX,[EBP + 0xfffffcee]
007367FF  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00736802  EB 09                     JMP 0x0073680d
LAB_00736804:
00736804  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00736807  83 C0 02                  ADD EAX,0x2
0073680A  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0073680d:
0073680D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00736810  33 D2                     XOR EDX,EDX
00736812  8A 11                     MOV DL,byte ptr [ECX]
00736814  85 D2                     TEST EDX,EDX
00736816  74 40                     JZ 0x00736858
00736818  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073681B  33 C9                     XOR ECX,ECX
0073681D  8A 08                     MOV CL,byte ptr [EAX]
0073681F  89 8D E4 FA FF FF         MOV dword ptr [EBP + 0xfffffae4],ECX
00736825  EB 0F                     JMP 0x00736836
LAB_00736827:
00736827  8B 95 E4 FA FF FF         MOV EDX,dword ptr [EBP + 0xfffffae4]
0073682D  83 C2 01                  ADD EDX,0x1
00736830  89 95 E4 FA FF FF         MOV dword ptr [EBP + 0xfffffae4],EDX
LAB_00736836:
00736836  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00736839  33 C9                     XOR ECX,ECX
0073683B  8A 48 01                  MOV CL,byte ptr [EAX + 0x1]
0073683E  39 8D E4 FA FF FF         CMP dword ptr [EBP + 0xfffffae4],ECX
00736844  77 10                     JA 0x00736856
00736846  8B 95 E4 FA FF FF         MOV EDX,dword ptr [EBP + 0xfffffae4]
0073684C  C6 84 15 FC FC FF FF 20   MOV byte ptr [EBP + EDX*0x1 + 0xfffffcfc],0x20
00736854  EB D1                     JMP 0x00736827
LAB_00736856:
00736856  EB AC                     JMP 0x00736804
LAB_00736858:
00736858  6A 00                     PUSH 0x0
0073685A  A1 84 A5 85 00            MOV EAX,[0x0085a584]
0073685F  50                        PUSH EAX
00736860  8B 0D E0 A2 85 00         MOV ECX,dword ptr [0x0085a2e0]
00736866  51                        PUSH ECX
00736867  8D 95 FC FD FF FF         LEA EDX,[EBP + 0xfffffdfc]
0073686D  52                        PUSH EDX
0073686E  68 00 01 00 00            PUSH 0x100
00736873  8D 85 FC FC FF FF         LEA EAX,[EBP + 0xfffffcfc]
00736879  50                        PUSH EAX
0073687A  6A 01                     PUSH 0x1
0073687C  E8 CF 5F 00 00            CALL 0x0073c850
00736881  83 C4 1C                  ADD ESP,0x1c
00736884  6A 00                     PUSH 0x0
00736886  8B 0D E0 A2 85 00         MOV ECX,dword ptr [0x0085a2e0]
0073688C  51                        PUSH ECX
0073688D  68 00 01 00 00            PUSH 0x100
00736892  8D 95 E8 FB FF FF         LEA EDX,[EBP + 0xfffffbe8]
00736898  52                        PUSH EDX
00736899  68 00 01 00 00            PUSH 0x100
0073689E  8D 85 FC FC FF FF         LEA EAX,[EBP + 0xfffffcfc]
007368A4  50                        PUSH EAX
007368A5  68 00 01 00 00            PUSH 0x100
007368AA  8B 0D 84 A5 85 00         MOV ECX,dword ptr [0x0085a584]
007368B0  51                        PUSH ECX
007368B1  E8 5A 61 00 00            CALL 0x0073ca10
007368B6  83 C4 20                  ADD ESP,0x20
007368B9  6A 00                     PUSH 0x0
007368BB  8B 15 E0 A2 85 00         MOV EDX,dword ptr [0x0085a2e0]
007368C1  52                        PUSH EDX
007368C2  68 00 01 00 00            PUSH 0x100
007368C7  8D 85 E8 FA FF FF         LEA EAX,[EBP + 0xfffffae8]
007368CD  50                        PUSH EAX
007368CE  68 00 01 00 00            PUSH 0x100
007368D3  8D 8D FC FC FF FF         LEA ECX,[EBP + 0xfffffcfc]
007368D9  51                        PUSH ECX
007368DA  68 00 02 00 00            PUSH 0x200
007368DF  8B 15 84 A5 85 00         MOV EDX,dword ptr [0x0085a584]
007368E5  52                        PUSH EDX
007368E6  E8 25 61 00 00            CALL 0x0073ca10
007368EB  83 C4 20                  ADD ESP,0x20
007368EE  C7 85 E4 FA FF FF 00 00 00 00  MOV dword ptr [EBP + 0xfffffae4],0x0
007368F8  EB 0F                     JMP 0x00736909
LAB_007368fa:
007368FA  8B 85 E4 FA FF FF         MOV EAX,dword ptr [EBP + 0xfffffae4]
00736900  83 C0 01                  ADD EAX,0x1
00736903  89 85 E4 FA FF FF         MOV dword ptr [EBP + 0xfffffae4],EAX
LAB_00736909:
00736909  81 BD E4 FA FF FF 00 01 00 00  CMP dword ptr [EBP + 0xfffffae4],0x100
00736913  0F 83 AB 00 00 00         JNC 0x007369c4
00736919  8B 8D E4 FA FF FF         MOV ECX,dword ptr [EBP + 0xfffffae4]
0073691F  33 D2                     XOR EDX,EDX
00736921  66 8B 94 4D FC FD FF FF   MOV DX,word ptr [EBP + ECX*0x2 + 0xfffffdfc]
00736929  83 E2 01                  AND EDX,0x1
0073692C  85 D2                     TEST EDX,EDX
0073692E  74 36                     JZ 0x00736966
00736930  8B 85 E4 FA FF FF         MOV EAX,dword ptr [EBP + 0xfffffae4]
00736936  8A 88 81 A4 85 00         MOV CL,byte ptr [EAX + 0x85a481]
0073693C  80 C9 10                  OR CL,0x10
0073693F  8B 95 E4 FA FF FF         MOV EDX,dword ptr [EBP + 0xfffffae4]
00736945  88 8A 81 A4 85 00         MOV byte ptr [EDX + 0x85a481],CL
0073694B  8B 85 E4 FA FF FF         MOV EAX,dword ptr [EBP + 0xfffffae4]
00736951  8B 8D E4 FA FF FF         MOV ECX,dword ptr [EBP + 0xfffffae4]
00736957  8A 94 0D E8 FB FF FF      MOV DL,byte ptr [EBP + ECX*0x1 + 0xfffffbe8]
0073695E  88 90 80 A3 85 00         MOV byte ptr [EAX + 0x85a380],DL
00736964  EB 59                     JMP 0x007369bf
LAB_00736966:
00736966  8B 85 E4 FA FF FF         MOV EAX,dword ptr [EBP + 0xfffffae4]
0073696C  33 C9                     XOR ECX,ECX
0073696E  66 8B 8C 45 FC FD FF FF   MOV CX,word ptr [EBP + EAX*0x2 + 0xfffffdfc]
00736976  83 E1 02                  AND ECX,0x2
00736979  85 C9                     TEST ECX,ECX
0073697B  74 35                     JZ 0x007369b2
0073697D  8B 95 E4 FA FF FF         MOV EDX,dword ptr [EBP + 0xfffffae4]
00736983  8A 82 81 A4 85 00         MOV AL,byte ptr [EDX + 0x85a481]
00736989  0C 20                     OR AL,0x20
0073698B  8B 8D E4 FA FF FF         MOV ECX,dword ptr [EBP + 0xfffffae4]
00736991  88 81 81 A4 85 00         MOV byte ptr [ECX + 0x85a481],AL
00736997  8B 95 E4 FA FF FF         MOV EDX,dword ptr [EBP + 0xfffffae4]
0073699D  8B 85 E4 FA FF FF         MOV EAX,dword ptr [EBP + 0xfffffae4]
007369A3  8A 8C 05 E8 FA FF FF      MOV CL,byte ptr [EBP + EAX*0x1 + 0xfffffae8]
007369AA  88 8A 80 A3 85 00         MOV byte ptr [EDX + 0x85a380],CL
007369B0  EB 0D                     JMP 0x007369bf
LAB_007369b2:
007369B2  8B 95 E4 FA FF FF         MOV EDX,dword ptr [EBP + 0xfffffae4]
007369B8  C6 82 80 A3 85 00 00      MOV byte ptr [EDX + 0x85a380],0x0
LAB_007369bf:
007369BF  E9 36 FF FF FF            JMP 0x007368fa
LAB_007369c4:
007369C4  E9 C5 00 00 00            JMP 0x00736a8e
LAB_007369c9:
007369C9  C7 85 E4 FA FF FF 00 00 00 00  MOV dword ptr [EBP + 0xfffffae4],0x0
007369D3  EB 0F                     JMP 0x007369e4
LAB_007369d5:
007369D5  8B 85 E4 FA FF FF         MOV EAX,dword ptr [EBP + 0xfffffae4]
007369DB  83 C0 01                  ADD EAX,0x1
007369DE  89 85 E4 FA FF FF         MOV dword ptr [EBP + 0xfffffae4],EAX
LAB_007369e4:
007369E4  81 BD E4 FA FF FF 00 01 00 00  CMP dword ptr [EBP + 0xfffffae4],0x100
007369EE  0F 83 9A 00 00 00         JNC 0x00736a8e
007369F4  83 BD E4 FA FF FF 41      CMP dword ptr [EBP + 0xfffffae4],0x41
007369FB  72 3B                     JC 0x00736a38
007369FD  83 BD E4 FA FF FF 5A      CMP dword ptr [EBP + 0xfffffae4],0x5a
00736A04  77 32                     JA 0x00736a38
00736A06  8B 8D E4 FA FF FF         MOV ECX,dword ptr [EBP + 0xfffffae4]
00736A0C  8A 91 81 A4 85 00         MOV DL,byte ptr [ECX + 0x85a481]
00736A12  80 CA 10                  OR DL,0x10
00736A15  8B 85 E4 FA FF FF         MOV EAX,dword ptr [EBP + 0xfffffae4]
00736A1B  88 90 81 A4 85 00         MOV byte ptr [EAX + 0x85a481],DL
00736A21  8B 8D E4 FA FF FF         MOV ECX,dword ptr [EBP + 0xfffffae4]
00736A27  83 C1 20                  ADD ECX,0x20
00736A2A  8B 95 E4 FA FF FF         MOV EDX,dword ptr [EBP + 0xfffffae4]
00736A30  88 8A 80 A3 85 00         MOV byte ptr [EDX + 0x85a380],CL
00736A36  EB 51                     JMP 0x00736a89
LAB_00736a38:
00736A38  83 BD E4 FA FF FF 61      CMP dword ptr [EBP + 0xfffffae4],0x61
00736A3F  72 3B                     JC 0x00736a7c
00736A41  83 BD E4 FA FF FF 7A      CMP dword ptr [EBP + 0xfffffae4],0x7a
00736A48  77 32                     JA 0x00736a7c
00736A4A  8B 85 E4 FA FF FF         MOV EAX,dword ptr [EBP + 0xfffffae4]
00736A50  8A 88 81 A4 85 00         MOV CL,byte ptr [EAX + 0x85a481]
00736A56  80 C9 20                  OR CL,0x20
00736A59  8B 95 E4 FA FF FF         MOV EDX,dword ptr [EBP + 0xfffffae4]
00736A5F  88 8A 81 A4 85 00         MOV byte ptr [EDX + 0x85a481],CL
00736A65  8B 85 E4 FA FF FF         MOV EAX,dword ptr [EBP + 0xfffffae4]
00736A6B  83 E8 20                  SUB EAX,0x20
00736A6E  8B 8D E4 FA FF FF         MOV ECX,dword ptr [EBP + 0xfffffae4]
00736A74  88 81 80 A3 85 00         MOV byte ptr [ECX + 0x85a380],AL
00736A7A  EB 0D                     JMP 0x00736a89
LAB_00736a7c:
00736A7C  8B 95 E4 FA FF FF         MOV EDX,dword ptr [EBP + 0xfffffae4]
00736A82  C6 82 80 A3 85 00 00      MOV byte ptr [EDX + 0x85a380],0x0
LAB_00736a89:
00736A89  E9 47 FF FF FF            JMP 0x007369d5
LAB_00736a8e:
00736A8E  8B E5                     MOV ESP,EBP
00736A90  5D                        POP EBP
00736A91  C3                        RET
