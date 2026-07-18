FUN_0071b760:
0071B760  55                        PUSH EBP
0071B761  8B EC                     MOV EBP,ESP
0071B763  53                        PUSH EBX
0071B764  56                        PUSH ESI
0071B765  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0071B768  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0071B76B  8B CE                     MOV ECX,ESI
0071B76D  57                        PUSH EDI
0071B76E  81 E1 FF FF 0F 00         AND ECX,0xfffff
0071B774  8D 91 05 FF FF FF         LEA EDX,[ECX + 0xffffff05]
0071B77A  83 FA 03                  CMP EDX,0x3
0071B77D  77 27                     JA 0x0071b7a6
switchD_0071b77f::switchD:
0071B77F  FF 24 95 54 B9 71 00      JMP dword ptr [EDX*0x4 + 0x71b954]
switchD_0071b77f::caseD_fe:
0071B786  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0071B789  8A 49 0C                  MOV CL,byte ptr [ECX + 0xc]
0071B78C  EB 1B                     JMP 0x0071b7a9
switchD_0071b77f::caseD_fd:
0071B78E  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0071B791  8A 4A 0D                  MOV CL,byte ptr [EDX + 0xd]
0071B794  EB 13                     JMP 0x0071b7a9
switchD_0071b77f::caseD_fc:
0071B796  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0071B799  8A 4A 0E                  MOV CL,byte ptr [EDX + 0xe]
0071B79C  EB 0B                     JMP 0x0071b7a9
switchD_0071b77f::caseD_fb:
0071B79E  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0071B7A1  8A 4A 0F                  MOV CL,byte ptr [EDX + 0xf]
0071B7A4  EB 03                     JMP 0x0071b7a9
switchD_0071b77f::default:
0071B7A6  8A 0C 01                  MOV CL,byte ptr [ECX + EAX*0x1]
LAB_0071b7a9:
0071B7A9  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
0071B7AC  BA 80 00 00 00            MOV EDX,0x80
0071B7B1  23 CA                     AND ECX,EDX
0071B7B3  89 0F                     MOV dword ptr [EDI],ECX
0071B7B5  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
0071B7B8  F6 45 0C 10               TEST byte ptr [EBP + 0xc],0x10
0071B7BC  C7 07 01 00 00 00         MOV dword ptr [EDI],0x1
0071B7C2  0F 85 EB 00 00 00         JNZ 0x0071b8b3
0071B7C8  8B CE                     MOV ECX,ESI
0071B7CA  81 E1 00 00 00 40         AND ECX,0x40000000
0071B7D0  74 0D                     JZ 0x0071b7df
0071B7D2  84 50 38                  TEST byte ptr [EAX + 0x38],DL
0071B7D5  75 08                     JNZ 0x0071b7df
0071B7D7  84 90 B8 00 00 00         TEST byte ptr [EAX + 0xb8],DL
0071B7DD  74 2B                     JZ 0x0071b80a
LAB_0071b7df:
0071B7DF  85 C9                     TEST ECX,ECX
0071B7E1  75 2D                     JNZ 0x0071b810
0071B7E3  8A 58 38                  MOV BL,byte ptr [EAX + 0x38]
0071B7E6  8B CE                     MOV ECX,ESI
0071B7E8  C1 E9 1D                  SHR ECX,0x1d
0071B7EB  80 E1 01                  AND CL,0x1
0071B7EE  C0 EB 07                  SHR BL,0x7
0071B7F1  3A CB                     CMP CL,BL
0071B7F3  75 15                     JNZ 0x0071b80a
0071B7F5  8A 98 B8 00 00 00         MOV BL,byte ptr [EAX + 0xb8]
0071B7FB  8B CE                     MOV ECX,ESI
0071B7FD  C1 E9 1C                  SHR ECX,0x1c
0071B800  80 E1 01                  AND CL,0x1
0071B803  C0 EB 07                  SHR BL,0x7
0071B806  3A CB                     CMP CL,BL
0071B808  74 06                     JZ 0x0071b810
LAB_0071b80a:
0071B80A  C7 07 00 00 00 00         MOV dword ptr [EDI],0x0
LAB_0071b810:
0071B810  8B CE                     MOV ECX,ESI
0071B812  81 E1 00 00 00 08         AND ECX,0x8000000
0071B818  74 0D                     JZ 0x0071b827
0071B81A  84 50 1D                  TEST byte ptr [EAX + 0x1d],DL
0071B81D  75 08                     JNZ 0x0071b827
0071B81F  84 90 9D 00 00 00         TEST byte ptr [EAX + 0x9d],DL
0071B825  74 2B                     JZ 0x0071b852
LAB_0071b827:
0071B827  85 C9                     TEST ECX,ECX
0071B829  75 2D                     JNZ 0x0071b858
0071B82B  8A 58 1D                  MOV BL,byte ptr [EAX + 0x1d]
0071B82E  8B CE                     MOV ECX,ESI
0071B830  C1 E9 1A                  SHR ECX,0x1a
0071B833  80 E1 01                  AND CL,0x1
0071B836  C0 EB 07                  SHR BL,0x7
0071B839  3A CB                     CMP CL,BL
0071B83B  75 15                     JNZ 0x0071b852
0071B83D  8A 98 9D 00 00 00         MOV BL,byte ptr [EAX + 0x9d]
0071B843  8B CE                     MOV ECX,ESI
0071B845  C1 E9 19                  SHR ECX,0x19
0071B848  80 E1 01                  AND CL,0x1
0071B84B  C0 EB 07                  SHR BL,0x7
0071B84E  3A CB                     CMP CL,BL
0071B850  74 06                     JZ 0x0071b858
LAB_0071b852:
0071B852  C7 07 00 00 00 00         MOV dword ptr [EDI],0x0
LAB_0071b858:
0071B858  8B CE                     MOV ECX,ESI
0071B85A  81 E1 00 00 00 01         AND ECX,0x1000000
0071B860  74 0E                     JZ 0x0071b870
0071B862  84 50 2A                  TEST byte ptr [EAX + 0x2a],DL
0071B865  75 09                     JNZ 0x0071b870
0071B867  84 50 36                  TEST byte ptr [EAX + 0x36],DL
0071B86A  0F 84 D3 00 00 00         JZ 0x0071b943
LAB_0071b870:
0071B870  85 C9                     TEST ECX,ECX
0071B872  0F 85 D1 00 00 00         JNZ 0x0071b949
0071B878  8A 48 2A                  MOV CL,byte ptr [EAX + 0x2a]
0071B87B  8B D6                     MOV EDX,ESI
0071B87D  C1 EA 17                  SHR EDX,0x17
0071B880  80 E2 01                  AND DL,0x1
0071B883  C0 E9 07                  SHR CL,0x7
0071B886  3A D1                     CMP DL,CL
0071B888  0F 85 B5 00 00 00         JNZ 0x0071b943
0071B88E  8A 40 36                  MOV AL,byte ptr [EAX + 0x36]
0071B891  8B D6                     MOV EDX,ESI
0071B893  C1 EA 16                  SHR EDX,0x16
0071B896  80 E2 01                  AND DL,0x1
0071B899  C0 E8 07                  SHR AL,0x7
0071B89C  3A D0                     CMP DL,AL
0071B89E  0F 84 A5 00 00 00         JZ 0x0071b949
0071B8A4  C7 07 00 00 00 00         MOV dword ptr [EDI],0x0
0071B8AA  5F                        POP EDI
0071B8AB  5E                        POP ESI
0071B8AC  33 C0                     XOR EAX,EAX
0071B8AE  5B                        POP EBX
0071B8AF  5D                        POP EBP
0071B8B0  C2 18 00                  RET 0x18
LAB_0071b8b3:
0071B8B3  F7 C6 00 00 00 40         TEST ESI,0x40000000
0071B8B9  74 0D                     JZ 0x0071b8c8
0071B8BB  84 50 38                  TEST byte ptr [EAX + 0x38],DL
0071B8BE  75 08                     JNZ 0x0071b8c8
0071B8C0  84 90 B8 00 00 00         TEST byte ptr [EAX + 0xb8],DL
0071B8C6  74 7B                     JZ 0x0071b943
LAB_0071b8c8:
0071B8C8  F7 C6 00 00 00 20         TEST ESI,0x20000000
0071B8CE  74 05                     JZ 0x0071b8d5
0071B8D0  84 50 38                  TEST byte ptr [EAX + 0x38],DL
0071B8D3  74 6E                     JZ 0x0071b943
LAB_0071b8d5:
0071B8D5  F7 C6 00 00 00 10         TEST ESI,0x10000000
0071B8DB  74 08                     JZ 0x0071b8e5
0071B8DD  84 90 B8 00 00 00         TEST byte ptr [EAX + 0xb8],DL
0071B8E3  74 5E                     JZ 0x0071b943
LAB_0071b8e5:
0071B8E5  F7 C6 00 00 00 08         TEST ESI,0x8000000
0071B8EB  74 0D                     JZ 0x0071b8fa
0071B8ED  84 50 1D                  TEST byte ptr [EAX + 0x1d],DL
0071B8F0  75 08                     JNZ 0x0071b8fa
0071B8F2  84 90 9D 00 00 00         TEST byte ptr [EAX + 0x9d],DL
0071B8F8  74 49                     JZ 0x0071b943
LAB_0071b8fa:
0071B8FA  F7 C6 00 00 00 04         TEST ESI,0x4000000
0071B900  74 05                     JZ 0x0071b907
0071B902  84 50 1D                  TEST byte ptr [EAX + 0x1d],DL
0071B905  74 3C                     JZ 0x0071b943
LAB_0071b907:
0071B907  F7 C6 00 00 00 02         TEST ESI,0x2000000
0071B90D  74 08                     JZ 0x0071b917
0071B90F  84 90 9D 00 00 00         TEST byte ptr [EAX + 0x9d],DL
0071B915  74 2C                     JZ 0x0071b943
LAB_0071b917:
0071B917  F7 C6 00 00 00 01         TEST ESI,0x1000000
0071B91D  74 0A                     JZ 0x0071b929
0071B91F  84 50 2A                  TEST byte ptr [EAX + 0x2a],DL
0071B922  75 05                     JNZ 0x0071b929
0071B924  84 50 36                  TEST byte ptr [EAX + 0x36],DL
0071B927  74 1A                     JZ 0x0071b943
LAB_0071b929:
0071B929  F7 C6 00 00 80 00         TEST ESI,0x800000
0071B92F  74 05                     JZ 0x0071b936
0071B931  84 50 2A                  TEST byte ptr [EAX + 0x2a],DL
0071B934  74 0D                     JZ 0x0071b943
LAB_0071b936:
0071B936  F7 C6 00 00 40 00         TEST ESI,0x400000
0071B93C  74 0B                     JZ 0x0071b949
0071B93E  84 50 36                  TEST byte ptr [EAX + 0x36],DL
0071B941  75 06                     JNZ 0x0071b949
LAB_0071b943:
0071B943  C7 07 00 00 00 00         MOV dword ptr [EDI],0x0
LAB_0071b949:
0071B949  5F                        POP EDI
0071B94A  5E                        POP ESI
0071B94B  33 C0                     XOR EAX,EAX
0071B94D  5B                        POP EBX
0071B94E  5D                        POP EBP
0071B94F  C2 18 00                  RET 0x18
