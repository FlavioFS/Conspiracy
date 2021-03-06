#include <iostream>

#include "engine.hpp"
#include "game_scene.hpp"
#include "lose_scene.hpp"
#include "win_scene.hpp"
#include "menu_scene.hpp"
#include "alien.hpp"
#include "stage_one.hpp"
#include "stage_two.hpp"
#include "stage_three.hpp"
#include "stage_four.hpp"
#include "stage_five.hpp"
#include "choose_stage_scene.hpp"
#include "finish_scene.hpp"
#include "tutorial_scene.hpp"

using namespace engine;


int main(int, char**){
    loadEngine();
    MenuScene* menuScene = new MenuScene(0);
    StageOne * stageOne = new StageOne(1, "assets/tiledMaps/Stage1.txt");
    StageTwo * stageTwo = new StageTwo(2, "assets/tiledMaps/Stage2.txt");
    StageThree * stageThree = new StageThree(3, "assets/tiledMaps/Stage3.txt");
    StageFour * stageFour = new StageFour(4, "assets/tiledMaps/Stage4.txt");
    StageFive * stageFive = new StageFive(5, "assets/tiledMaps/Stage5.txt");
    LoseScene* loseScene = new LoseScene(6);
    WinScene* winScene = new WinScene(7);
    TutorialScene* biluTutorialScene = new TutorialScene(20, "assets/sprites/tutorial_bilu.png", 1);
    TutorialScene* exitTutorialScene = new TutorialScene(21, "assets/sprites/tutorial_saida.png", 20);
    TutorialScene* commandsTutorialScene = new TutorialScene(22, "assets/sprites/tutoriaL_comandos.png", 21);
    TutorialScene* etemer1TutorialScene = new TutorialScene(24, "assets/sprites/tutorial_temer2.png", 3);
    TutorialScene* etemer2TutorialScene = new TutorialScene(23, "assets/sprites/tutorial_temer1.png", 24);
    TutorialScene* varginha1TutorialScene = new TutorialScene(25, "assets/sprites/tutorial_varginha1.png", 26);
    TutorialScene* varginha2TutorialScene = new TutorialScene(26, "assets/sprites/tutorial_varginha2.png", 2);
    ChooseStageScene* chooseStageScene = new ChooseStageScene(8);
    FinishScene* finishScene = new FinishScene(9);

    getSceneManager()->addScene(menuScene);
    getSceneManager()->addScene(stageOne);
    getSceneManager()->addScene(stageTwo);
    getSceneManager()->addScene(stageThree);
    getSceneManager()->addScene(stageFour);
    getSceneManager()->addScene(stageFive);
    getSceneManager()->addScene(loseScene);
    getSceneManager()->addScene(winScene);
    getSceneManager()->addScene(biluTutorialScene);
    getSceneManager()->addScene(exitTutorialScene);
    getSceneManager()->addScene(etemer1TutorialScene);
    getSceneManager()->addScene(etemer2TutorialScene);
    getSceneManager()->addScene(varginha1TutorialScene);
    getSceneManager()->addScene(varginha2TutorialScene);
    getSceneManager()->addScene(commandsTutorialScene);
    getSceneManager()->addScene(chooseStageScene);
    getSceneManager()->addScene(finishScene);

    getSceneManager()->loadScene(0);

    run();
    return 0;
}
