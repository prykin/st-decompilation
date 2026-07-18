PrividerTy::DonePrivider:
005BA560  55                        PUSH EBP
005BA561  8B EC                     MOV EBP,ESP
005BA563  83 EC 48                  SUB ESP,0x48
005BA566  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005BA56B  53                        PUSH EBX
005BA56C  56                        PUSH ESI
005BA56D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005BA570  57                        PUSH EDI
005BA571  8D 55 BC                  LEA EDX,[EBP + -0x44]
005BA574  8D 4D B8                  LEA ECX,[EBP + -0x48]
005BA577  6A 00                     PUSH 0x0
005BA579  52                        PUSH EDX
005BA57A  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005BA57D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005BA583  E8 68 32 17 00            CALL 0x0072d7f0
005BA588  8B F0                     MOV ESI,EAX
005BA58A  83 C4 08                  ADD ESP,0x8
005BA58D  85 F6                     TEST ESI,ESI
005BA58F  0F 85 1E 02 00 00         JNZ 0x005ba7b3
005BA595  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
005BA598  8B CF                     MOV ECX,EDI
005BA59A  E8 EF 9F E4 FF            CALL 0x0040458e
005BA59F  8B 35 30 2A 80 00         MOV ESI,dword ptr [0x00802a30]
005BA5A5  85 F6                     TEST ESI,ESI
005BA5A7  74 7C                     JZ 0x005ba625
005BA5A9  8B 86 C9 00 00 00         MOV EAX,dword ptr [ESI + 0xc9]
005BA5AF  8B 8E C5 00 00 00         MOV ECX,dword ptr [ESI + 0xc5]
005BA5B5  50                        PUSH EAX
005BA5B6  51                        PUSH ECX
005BA5B7  6A 00                     PUSH 0x0
005BA5B9  8B CE                     MOV ECX,ESI
005BA5BB  C6 86 93 04 00 00 01      MOV byte ptr [ESI + 0x493],0x1
005BA5C2  66 C7 86 94 04 00 00 FF FF  MOV word ptr [ESI + 0x494],0xffff
005BA5CB  E8 AE AA E4 FF            CALL 0x0040507e
005BA5D0  8B 96 C9 00 00 00         MOV EDX,dword ptr [ESI + 0xc9]
005BA5D6  8B 86 C5 00 00 00         MOV EAX,dword ptr [ESI + 0xc5]
005BA5DC  52                        PUSH EDX
005BA5DD  50                        PUSH EAX
005BA5DE  8B CE                     MOV ECX,ESI
005BA5E0  E8 39 7E E4 FF            CALL 0x0040241e
005BA5E5  C6 86 D2 00 00 00 00      MOV byte ptr [ESI + 0xd2],0x0
005BA5EC  C7 86 DF 04 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x4df],0xffffffff
005BA5F6  A1 30 2A 80 00            MOV EAX,[0x00802a30]
005BA5FB  8B 88 A9 00 00 00         MOV ECX,dword ptr [EAX + 0xa9]
005BA601  85 C9                     TEST ECX,ECX
005BA603  74 14                     JZ 0x005ba619
005BA605  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
005BA608  83 F9 FF                  CMP ECX,-0x1
005BA60B  74 18                     JZ 0x005ba625
005BA60D  51                        PUSH ECX
005BA60E  8B 48 60                  MOV ECX,dword ptr [EAX + 0x60]
005BA611  51                        PUSH ECX
005BA612  E8 D9 94 0F 00            CALL 0x006b3af0
005BA617  EB 0C                     JMP 0x005ba625
LAB_005ba619:
005BA619  8B 90 AD 00 00 00         MOV EDX,dword ptr [EAX + 0xad]
005BA61F  52                        PUSH EDX
005BA620  E8 EB E4 0F 00            CALL 0x006b8b10
LAB_005ba625:
005BA625  81 7F 4D 02 61 00 00      CMP dword ptr [EDI + 0x4d],0x6102
005BA62C  75 12                     JNZ 0x005ba640
005BA62E  A1 9C 75 80 00            MOV EAX,[0x0080759c]
005BA633  6A 02                     PUSH 0x2
005BA635  6A 0A                     PUSH 0xa
005BA637  50                        PUSH EAX
005BA638  E8 06 77 E4 FF            CALL 0x00401d43
005BA63D  83 C4 0C                  ADD ESP,0xc
LAB_005ba640:
005BA640  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005BA646  8D 41 2C                  LEA EAX,[ECX + 0x2c]
005BA649  8B 49 2C                  MOV ECX,dword ptr [ECX + 0x2c]
005BA64C  85 C9                     TEST ECX,ECX
005BA64E  74 0C                     JZ 0x005ba65c
005BA650  8B 0D 80 67 80 00         MOV ECX,dword ptr [0x00806780]
005BA656  50                        PUSH EAX
005BA657  E8 84 7A 13 00            CALL 0x006f20e0
LAB_005ba65c:
005BA65C  8D 8F 77 1A 00 00         LEA ECX,[EDI + 0x1a77]
005BA662  E8 49 B4 15 00            CALL 0x00715ab0
005BA667  8D 8F 08 1B 00 00         LEA ECX,[EDI + 0x1b08]
005BA66D  E8 3E B4 15 00            CALL 0x00715ab0
005BA672  8D 8F 99 1B 00 00         LEA ECX,[EDI + 0x1b99]
005BA678  E8 33 B4 15 00            CALL 0x00715ab0
005BA67D  8D B7 2A 1C 00 00         LEA ESI,[EDI + 0x1c2a]
005BA683  BB 16 00 00 00            MOV EBX,0x16
LAB_005ba688:
005BA688  8B 06                     MOV EAX,dword ptr [ESI]
005BA68A  83 F8 FF                  CMP EAX,-0x1
005BA68D  74 13                     JZ 0x005ba6a2
005BA68F  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005BA695  50                        PUSH EAX
005BA696  52                        PUSH EDX
005BA697  E8 14 95 0F 00            CALL 0x006b3bb0
005BA69C  C7 06 FF FF FF FF         MOV dword ptr [ESI],0xffffffff
LAB_005ba6a2:
005BA6A2  83 C6 04                  ADD ESI,0x4
005BA6A5  4B                        DEC EBX
005BA6A6  75 E0                     JNZ 0x005ba688
005BA6A8  8B 87 8A 1C 00 00         MOV EAX,dword ptr [EDI + 0x1c8a]
005BA6AE  83 F8 FF                  CMP EAX,-0x1
005BA6B1  74 0C                     JZ 0x005ba6bf
005BA6B3  50                        PUSH EAX
005BA6B4  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005BA6B9  50                        PUSH EAX
005BA6BA  E8 F1 94 0F 00            CALL 0x006b3bb0
LAB_005ba6bf:
005BA6BF  8B 8F 82 1C 00 00         MOV ECX,dword ptr [EDI + 0x1c82]
005BA6C5  8D 87 82 1C 00 00         LEA EAX,[EDI + 0x1c82]
005BA6CB  33 F6                     XOR ESI,ESI
005BA6CD  C7 87 8A 1C 00 00 FF FF FF FF  MOV dword ptr [EDI + 0x1c8a],0xffffffff
005BA6D7  3B CE                     CMP ECX,ESI
005BA6D9  74 06                     JZ 0x005ba6e1
005BA6DB  50                        PUSH EAX
005BA6DC  E8 7F 09 0F 00            CALL 0x006ab060
LAB_005ba6e1:
005BA6E1  8B 8F 8E 1C 00 00         MOV ECX,dword ptr [EDI + 0x1c8e]
005BA6E7  8D 87 8E 1C 00 00         LEA EAX,[EDI + 0x1c8e]
005BA6ED  3B CE                     CMP ECX,ESI
005BA6EF  74 06                     JZ 0x005ba6f7
005BA6F1  50                        PUSH EAX
005BA6F2  E8 69 09 0F 00            CALL 0x006ab060
LAB_005ba6f7:
005BA6F7  8B 8F 96 1C 00 00         MOV ECX,dword ptr [EDI + 0x1c96]
005BA6FD  3B CE                     CMP ECX,ESI
005BA6FF  74 1A                     JZ 0x005ba71b
005BA701  E8 84 6B E4 FF            CALL 0x0040128a
005BA706  8B 8F 96 1C 00 00         MOV ECX,dword ptr [EDI + 0x1c96]
005BA70C  51                        PUSH ECX
005BA70D  E8 9E 3B 17 00            CALL 0x0072e2b0
005BA712  83 C4 04                  ADD ESP,0x4
005BA715  89 B7 96 1C 00 00         MOV dword ptr [EDI + 0x1c96],ESI
LAB_005ba71b:
005BA71B  8B 8F 9A 1C 00 00         MOV ECX,dword ptr [EDI + 0x1c9a]
005BA721  3B CE                     CMP ECX,ESI
005BA723  74 1A                     JZ 0x005ba73f
005BA725  E8 60 6B E4 FF            CALL 0x0040128a
005BA72A  8B 97 9A 1C 00 00         MOV EDX,dword ptr [EDI + 0x1c9a]
005BA730  52                        PUSH EDX
005BA731  E8 7A 3B 17 00            CALL 0x0072e2b0
005BA736  83 C4 04                  ADD ESP,0x4
005BA739  89 B7 9A 1C 00 00         MOV dword ptr [EDI + 0x1c9a],ESI
LAB_005ba73f:
005BA73F  81 7F 4D 02 61 00 00      CMP dword ptr [EDI + 0x4d],0x6102
005BA746  75 27                     JNZ 0x005ba76f
005BA748  8B 87 5B 1A 00 00         MOV EAX,dword ptr [EDI + 0x1a5b]
005BA74E  8B 88 E6 02 00 00         MOV ECX,dword ptr [EAX + 0x2e6]
005BA754  3B CE                     CMP ECX,ESI
005BA756  74 17                     JZ 0x005ba76f
005BA758  E8 D1 9E E4 FF            CALL 0x0040462e
005BA75D  8B 8F 5B 1A 00 00         MOV ECX,dword ptr [EDI + 0x1a5b]
005BA763  8B 91 E6 02 00 00         MOV EDX,dword ptr [ECX + 0x2e6]
005BA769  89 B2 AB 1C 00 00         MOV dword ptr [EDX + 0x1cab],ESI
LAB_005ba76f:
005BA76F  39 77 4D                  CMP dword ptr [EDI + 0x4d],ESI
005BA772  74 0E                     JZ 0x005ba782
005BA774  8D 47 3D                  LEA EAX,[EDI + 0x3d]
005BA777  B9 20 76 80 00            MOV ECX,0x807620
005BA77C  50                        PUSH EAX
005BA77D  E8 CE 93 12 00            CALL 0x006e3b50
LAB_005ba782:
005BA782  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005BA788  E8 A3 83 E4 FF            CALL 0x00402b30
005BA78D  8B 87 92 1C 00 00         MOV EAX,dword ptr [EDI + 0x1c92]
005BA793  3B C6                     CMP EAX,ESI
005BA795  74 06                     JZ 0x005ba79d
005BA797  50                        PUSH EAX
005BA798  E8 D3 AD 0F 00            CALL 0x006b5570
LAB_005ba79d:
005BA79D  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
005BA7A0  89 B7 92 1C 00 00         MOV dword ptr [EDI + 0x1c92],ESI
005BA7A6  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005BA7AC  5F                        POP EDI
005BA7AD  5E                        POP ESI
005BA7AE  5B                        POP EBX
005BA7AF  8B E5                     MOV ESP,EBP
005BA7B1  5D                        POP EBP
005BA7B2  C3                        RET
LAB_005ba7b3:
005BA7B3  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
005BA7B6  68 C0 CD 7C 00            PUSH 0x7ccdc0
005BA7BB  68 CC 4C 7A 00            PUSH 0x7a4ccc
005BA7C0  56                        PUSH ESI
005BA7C1  6A 00                     PUSH 0x0
005BA7C3  68 D3 00 00 00            PUSH 0xd3
005BA7C8  68 28 CD 7C 00            PUSH 0x7ccd28
005BA7CD  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005BA7D3  E8 F8 2C 0F 00            CALL 0x006ad4d0
005BA7D8  83 C4 18                  ADD ESP,0x18
005BA7DB  85 C0                     TEST EAX,EAX
005BA7DD  74 01                     JZ 0x005ba7e0
005BA7DF  CC                        INT3
LAB_005ba7e0:
005BA7E0  68 D3 00 00 00            PUSH 0xd3
005BA7E5  68 28 CD 7C 00            PUSH 0x7ccd28
005BA7EA  6A 00                     PUSH 0x0
005BA7EC  56                        PUSH ESI
005BA7ED  E8 4E B6 0E 00            CALL 0x006a5e40
005BA7F2  5F                        POP EDI
005BA7F3  5E                        POP ESI
005BA7F4  5B                        POP EBX
005BA7F5  8B E5                     MOV ESP,EBP
005BA7F7  5D                        POP EBP
005BA7F8  C3                        RET
