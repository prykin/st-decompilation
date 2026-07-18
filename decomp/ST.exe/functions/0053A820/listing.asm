FUN_0053a820:
0053A820  55                        PUSH EBP
0053A821  8B EC                     MOV EBP,ESP
0053A823  83 EC 48                  SUB ESP,0x48
0053A826  8A 81 80 01 00 00         MOV AL,byte ptr [ECX + 0x180]
0053A82C  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0053A82F  8A 4D 08                  MOV CL,byte ptr [EBP + 0x8]
0053A832  56                        PUSH ESI
0053A833  3A C1                     CMP AL,CL
0053A835  75 09                     JNZ 0x0053a840
0053A837  33 C0                     XOR EAX,EAX
0053A839  5E                        POP ESI
0053A83A  8B E5                     MOV ESP,EBP
0053A83C  5D                        POP EBP
0053A83D  C2 04 00                  RET 0x4
LAB_0053a840:
0053A840  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
0053A846  8D 45 BC                  LEA EAX,[EBP + -0x44]
0053A849  8D 55 B8                  LEA EDX,[EBP + -0x48]
0053A84C  6A 00                     PUSH 0x0
0053A84E  50                        PUSH EAX
0053A84F  89 4D B8                  MOV dword ptr [EBP + -0x48],ECX
0053A852  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0053A858  E8 93 2F 1F 00            CALL 0x0072d7f0
0053A85D  8B F0                     MOV ESI,EAX
0053A85F  83 C4 08                  ADD ESP,0x8
0053A862  85 F6                     TEST ESI,ESI
0053A864  0F 85 1D 01 00 00         JNZ 0x0053a987
0053A86A  8A 45 08                  MOV AL,byte ptr [EBP + 0x8]
0053A86D  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0053A870  84 C0                     TEST AL,AL
0053A872  88 86 80 01 00 00         MOV byte ptr [ESI + 0x180],AL
0053A878  0F 84 D0 00 00 00         JZ 0x0053a94e
0053A87E  8B 0D E8 16 80 00         MOV ECX,dword ptr [0x008016e8]
0053A884  85 C9                     TEST ECX,ECX
0053A886  74 07                     JZ 0x0053a88f
0053A888  6A 00                     PUSH 0x0
0053A88A  E8 E4 71 EC FF            CALL 0x00401a73
LAB_0053a88f:
0053A88F  8B 0D 7C 16 80 00         MOV ECX,dword ptr [0x0080167c]
0053A895  85 C9                     TEST ECX,ECX
0053A897  74 07                     JZ 0x0053a8a0
0053A899  6A 00                     PUSH 0x0
0053A89B  E8 D3 71 EC FF            CALL 0x00401a73
LAB_0053a8a0:
0053A8A0  8B 0D 84 16 80 00         MOV ECX,dword ptr [0x00801684]
0053A8A6  85 C9                     TEST ECX,ECX
0053A8A8  74 07                     JZ 0x0053a8b1
0053A8AA  6A 00                     PUSH 0x0
0053A8AC  E8 C2 71 EC FF            CALL 0x00401a73
LAB_0053a8b1:
0053A8B1  8B 0D 98 16 80 00         MOV ECX,dword ptr [0x00801698]
0053A8B7  85 C9                     TEST ECX,ECX
0053A8B9  74 07                     JZ 0x0053a8c2
0053A8BB  8B 11                     MOV EDX,dword ptr [ECX]
0053A8BD  6A 00                     PUSH 0x0
0053A8BF  FF 52 1C                  CALL dword ptr [EDX + 0x1c]
LAB_0053a8c2:
0053A8C2  8B 0D 44 2A 80 00         MOV ECX,dword ptr [0x00802a44]
0053A8C8  85 C9                     TEST ECX,ECX
0053A8CA  74 09                     JZ 0x0053a8d5
0053A8CC  6A 00                     PUSH 0x0
0053A8CE  6A 00                     PUSH 0x0
0053A8D0  E8 22 A2 EC FF            CALL 0x00404af7
LAB_0053a8d5:
0053A8D5  8B 0D 78 16 80 00         MOV ECX,dword ptr [0x00801678]
0053A8DB  85 C9                     TEST ECX,ECX
0053A8DD  74 07                     JZ 0x0053a8e6
0053A8DF  8B 01                     MOV EAX,dword ptr [ECX]
0053A8E1  6A 00                     PUSH 0x0
0053A8E3  FF 50 1C                  CALL dword ptr [EAX + 0x1c]
LAB_0053a8e6:
0053A8E6  8B 0D EC 16 80 00         MOV ECX,dword ptr [0x008016ec]
0053A8EC  85 C9                     TEST ECX,ECX
0053A8EE  74 07                     JZ 0x0053a8f7
0053A8F0  8B 11                     MOV EDX,dword ptr [ECX]
0053A8F2  6A 00                     PUSH 0x0
0053A8F4  FF 52 1C                  CALL dword ptr [EDX + 0x1c]
LAB_0053a8f7:
0053A8F7  8B 0D 48 2A 80 00         MOV ECX,dword ptr [0x00802a48]
0053A8FD  85 C9                     TEST ECX,ECX
0053A8FF  74 07                     JZ 0x0053a908
0053A901  8B 01                     MOV EAX,dword ptr [ECX]
0053A903  6A 00                     PUSH 0x0
0053A905  FF 50 1C                  CALL dword ptr [EAX + 0x1c]
LAB_0053a908:
0053A908  8B 0D 8C 16 80 00         MOV ECX,dword ptr [0x0080168c]
0053A90E  85 C9                     TEST ECX,ECX
0053A910  74 07                     JZ 0x0053a919
0053A912  8B 11                     MOV EDX,dword ptr [ECX]
0053A914  6A 00                     PUSH 0x0
0053A916  FF 52 1C                  CALL dword ptr [EDX + 0x1c]
LAB_0053a919:
0053A919  8B 0D 80 16 80 00         MOV ECX,dword ptr [0x00801680]
0053A91F  85 C9                     TEST ECX,ECX
0053A921  74 07                     JZ 0x0053a92a
0053A923  6A 00                     PUSH 0x0
0053A925  E8 49 71 EC FF            CALL 0x00401a73
LAB_0053a92a:
0053A92A  8B 0D 90 16 80 00         MOV ECX,dword ptr [0x00801690]
0053A930  85 C9                     TEST ECX,ECX
0053A932  74 07                     JZ 0x0053a93b
0053A934  8B 01                     MOV EAX,dword ptr [ECX]
0053A936  6A 00                     PUSH 0x0
0053A938  FF 50 18                  CALL dword ptr [EAX + 0x18]
LAB_0053a93b:
0053A93B  8B 0D DC 16 80 00         MOV ECX,dword ptr [0x008016dc]
0053A941  85 C9                     TEST ECX,ECX
0053A943  74 05                     JZ 0x0053a94a
0053A945  E8 E6 7C EC FF            CALL 0x00402630
LAB_0053a94a:
0053A94A  6A 01                     PUSH 0x1
0053A94C  EB 1D                     JMP 0x0053a96b
LAB_0053a94e:
0053A94E  8B 0D 88 16 80 00         MOV ECX,dword ptr [0x00801688]
0053A954  85 C9                     TEST ECX,ECX
0053A956  74 11                     JZ 0x0053a969
0053A958  66 83 B9 3F 02 00 00 01   CMP word ptr [ECX + 0x23f],0x1
0053A960  75 07                     JNZ 0x0053a969
0053A962  6A 01                     PUSH 0x1
0053A964  E8 69 85 EC FF            CALL 0x00402ed2
LAB_0053a969:
0053A969  6A 00                     PUSH 0x0
LAB_0053a96b:
0053A96B  8B CE                     MOV ECX,ESI
0053A96D  E8 55 A9 EC FF            CALL 0x004052c7
0053A972  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0053A975  B8 01 00 00 00            MOV EAX,0x1
0053A97A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053A980  5E                        POP ESI
0053A981  8B E5                     MOV ESP,EBP
0053A983  5D                        POP EBP
0053A984  C2 04 00                  RET 0x4
LAB_0053a987:
0053A987  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
0053A98A  68 4C 76 7C 00            PUSH 0x7c764c
0053A98F  68 CC 4C 7A 00            PUSH 0x7a4ccc
0053A994  56                        PUSH ESI
0053A995  6A 00                     PUSH 0x0
0053A997  68 E9 00 00 00            PUSH 0xe9
0053A99C  68 74 75 7C 00            PUSH 0x7c7574
0053A9A1  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0053A9A7  E8 24 2B 17 00            CALL 0x006ad4d0
0053A9AC  83 C4 18                  ADD ESP,0x18
0053A9AF  85 C0                     TEST EAX,EAX
0053A9B1  74 01                     JZ 0x0053a9b4
0053A9B3  CC                        INT3
LAB_0053a9b4:
0053A9B4  68 E9 00 00 00            PUSH 0xe9
0053A9B9  68 74 75 7C 00            PUSH 0x7c7574
0053A9BE  6A 00                     PUSH 0x0
0053A9C0  56                        PUSH ESI
0053A9C1  E8 7A B4 16 00            CALL 0x006a5e40
0053A9C6  B8 01 00 00 00            MOV EAX,0x1
0053A9CB  5E                        POP ESI
0053A9CC  8B E5                     MOV ESP,EBP
0053A9CE  5D                        POP EBP
0053A9CF  C2 04 00                  RET 0x4
